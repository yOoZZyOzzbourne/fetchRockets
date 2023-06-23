package api.data

import io.ktor.client.*
import io.ktor.client.call.body
import io.ktor.client.engine.cio.CIO
import io.ktor.client.plugins.ClientRequestException
import io.ktor.client.plugins.ResponseException
import io.ktor.client.plugins.ServerResponseException
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.request.*
import io.ktor.http.HttpStatusCode
import io.ktor.serialization.kotlinx.json.*
import io.ktor.utils.io.errors.IOException
import kotlinx.serialization.json.Json
import model.home.RocketKMM

sealed class RocketException(message: String) : Throwable(message) {
    data class HttpError(val statusCode: HttpStatusCode) : RocketException("HTTP error")
    data class NetworkError(val errorMessage: String) : RocketException("Network error")
    data class UnknownError(val errorMessage: String) : RocketException("Unknown error")
}
class RocketApi {
    private val client = HttpClient(CIO) {
        install(ContentNegotiation) {
            json(Json {
                prettyPrint = true
                isLenient = true
                ignoreUnknownKeys = true
                expectSuccess = true
            })
        }
    }

    @Throws(Throwable::class) suspend fun fetchAllRockets(): List<RocketKMM> {
        try {
            return client.get("https://api.spacexdata.com/v4/rockets/").body()
        } catch (exception: Throwable) {
            throw when (exception) {
                is ClientRequestException -> RocketException.HttpError(exception.response.status)
                else -> RocketException.UnknownError(exception.message ?: "Unknown error occurred")
            }
        }
    }
    @Throws(Throwable::class) suspend fun fetchRocketById(rocketId: String): RocketKMM {
        try {
            return client.get("https://api.spacexdata.com/v4/rockets/$rocketId").body()
        } catch (exception: Throwable) {
            throw when (exception) {
                is ClientRequestException -> RocketException.NetworkError("Network stopped working")
                else -> RocketException.UnknownError(exception.message ?: "Unknown error occurred")
            }
        }
    }

    //MARK: Testing error handling
    @Throws(Throwable::class) suspend fun fetchRockets(success: (List<RocketKMM>) -> Unit, failure: (RocketException) -> Unit) {
        try {
            val rockets = client.get("https://api.spacexdata.com/v4/rockets/")
            success(rockets.body())
        } catch (exception: Throwable) {
            val rocketException = when (exception) {
                is ServerResponseException -> RocketException.NetworkError("Network stopped working")
                else -> RocketException.UnknownError(exception.message ?: "Unknown error occurred")
            }
            failure(rocketException)
        }
    }

}

//    override suspend fun getRockets(): Data<List<RocketItem>> {
//        return try {
//            val result = rocketApi.getRockets()
//            Data.Success(result)
//        } catch (ex: Exception) {
//            Data.Error(cause = ex)
//        }
//    }
//
//    override suspend fun getRocketInfo(id: String): Data<RocketDetailsModel> {
//        return try {
//            val result = rocketApi.getRocketInfo(id)
//            Data.Success(result)
//        } catch (ex: Exception) {
//            Data.Error(cause = ex)
//        }
//    }
