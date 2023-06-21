package api.data

import model.home.RocketItem
import io.ktor.client.*
import io.ktor.client.call.body
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.request.*
import io.ktor.serialization.kotlinx.json.*
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

    suspend fun fetchAllRockets(): List<RocketKMM> {
        return client.get("https://api.spacexdata.com/v4/rockets/").body()
    }

    suspend fun fetchRocketById(rocketId: String): RocketKMM {
        return client.get("https://api.spacexdata.com/v4/rockets/$rocketId").body()
    }

    fun foo(): String {
        return "xd"
    }
}