package api.data

//import domain.RemoteRepository
import model.home.RocketItem
import model.details.RocketDetailsModel
import model.Data

//class RocketRepository(
//    private val rocketApi: RocketApi
//) : RemoteRepository {
//
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
//
//}

//class ApiServiceImpl : ApiService {
//    override suspend fun getRockets() {
//        // Perform the API request using Ktor, HTTPURLConnection, or other platform-independent networking libraries
//        // Return the list of rockets
//    }
//}