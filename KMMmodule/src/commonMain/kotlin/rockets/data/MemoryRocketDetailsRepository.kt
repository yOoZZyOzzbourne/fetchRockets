//package rockets.data
//
//import model.details.RocketDetailsModel
//import rockets.domain.LocalRocketRepository
//import kotlinx.coroutines.flow.Flow
//import kotlinx.coroutines.flow.MutableStateFlow
//import kotlinx.coroutines.flow.filterNotNull
//
//class MemoryRocketDetailsRepository : LocalRocketRepository {
//    private val _rocket = MutableStateFlow<RocketDetailsModel?>(null)
//    override val rocket: Flow<RocketDetailsModel> = _rocket.filterNotNull()
//
//    override fun set(rocket: RocketDetailsModel) {
//        _rocket.tryEmit(rocket)
//    }
//}