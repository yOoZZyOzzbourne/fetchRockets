package api.data

import model.home.RocketItem
import io.ktor.client.*
import io.ktor.client.call.body
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.request.*
import io.ktor.serialization.kotlinx.json.*
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext
import kotlinx.serialization.json.Json
import model.home.RocketKMM

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

    suspend fun fetchAllRockets(): List<RocketKMM> = withContext(Dispatchers.Main) {
        return@withContext client.get("https://api.spacexdata.com/v4/rockets/").body()
    }

    suspend fun fetchRocketById(rocketId: String): RocketKMM = withContext(Dispatchers.Main){
        return@withContext client.get("https://api.spacexdata.com/v4/rockets/$rocketId").body()
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
