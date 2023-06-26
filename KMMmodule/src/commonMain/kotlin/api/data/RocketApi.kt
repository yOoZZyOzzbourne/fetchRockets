package api.data

import com.rickclephas.kmp.nativecoroutines.NativeCoroutines
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
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext
import kotlinx.serialization.json.Json
import model.home.RocketKMM

sealed class RocketException(message: String) : Throwable(message) {
    data class HttpError(val statusCode: HttpStatusCode) : RocketException("HTTP error")
    data class NetworkError(val errorMessage: String) : RocketException("Network error")
    data class UnknownError(val errorMessage: String) : RocketException("Unknown error")
}

sealed class RocketResult<out T> {
    data class Success<out T>(val data: T) : RocketResult<T>()
    data class Failure(val error: Throwable) : RocketResult<Nothing>()
}


class RocketApi {
    private val client = HttpClient {
        install(ContentNegotiation) {
            json(Json {
                prettyPrint = true
                isLenient = true
                ignoreUnknownKeys = true
            })
        }
    }

//    @NativeCoroutines
//    suspend fun fetchAllRockets(): Result<List<RocketKMM>> {
//        return kotlin.runCatching {
//            client.get("https://api.spacexdata.com/v4/rockets/")
//        }.fold(
//            onSuccess = { response ->
//                val rocketList: List<RocketKMM> = response.body()
//                Result.success(rocketList)
//            },
//            onFailure = { exception ->
//                Result.failure(
//                    when (exception) {
//                        is ClientRequestException -> RocketException.HttpError(exception.response.status)
//                        is IOException -> RocketException.NetworkError(
//                            exception.message ?: "Network error occurred"
//                        )
//
//                        else -> RocketException.UnknownError(
//                            exception.message ?: "Unknown error occurred"
//                        )
//                    }
//                )
//            }
//        )
//    }

    //Same thing but with custom result type

    @NativeCoroutines
    suspend fun fetchAllRockets(): RocketResult<List<RocketKMM>> {
        return try {
            RocketResult.Success(client.get("https://api.spacexdata.com/v4/rockets/").body())
        } catch (exception: Throwable) {
            RocketResult.Failure(
                when (exception) {
                    is ClientRequestException -> RocketException.HttpError(exception.response.status)
                    is IOException -> RocketException.NetworkError(
                        exception.message ?: "Network error occurred"
                    )

                    else -> RocketException.UnknownError(
                        exception.message ?: "Unknown error occurred"
                    )
                }
            )
        }
    }

    @NativeCoroutines
    suspend fun fetchRocketById(rocketId: String): RocketKMM {
        try {
            return client.get("https://api.spacexdata.com/v4/rockets/$rocketId").body()
        } catch (exception: Throwable) {
            throw when (exception) {
                is ClientRequestException -> RocketException.NetworkError("Network stopped working")
                else -> RocketException.UnknownError(exception.message ?: "Unknown error occurred")
            }
        }
    }
}