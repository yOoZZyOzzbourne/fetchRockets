package api.data

import model.home.RocketItem
import io.ktor.client.*
import io.ktor.client.call.body
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.request.*
import io.ktor.serialization.kotlinx.json.*
import kotlinx.serialization.json.Json
import model.home.Rocket

//import io.ktor.client.features.json.*
//import io.ktor.client.features.json.serializer.*

//val client = HttpClient {
//    install(JsonFeature) {
//        serializer = KotlinxSerializer()
//    }
//}
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

    suspend fun fetchRockets(): List<Rocket> {
        return client.get("https://api.spacexdata.com/v4/rockets/").body()
    }
}




//interface RocketApi {
//
//    suspend fun getRockets(): List<RocketItem>
//
//    //suspend fun getRocketInfo(
//    //    @Path(value = "rocket_id") id: String
//    //): RocketDetailsModel
//}
