//package rockets.domain
//
//import api.model.details.RocketDetailsModel
//import domain.SynchronousUseCase
//import kotlinx.coroutines.flow.Flow
//
//class ObserveRocketDetailsUseCase(
//    private val localRocketRepository: LocalRocketRepository
//) : SynchronousUseCase<Unit, Flow<RocketDetailsModel>> {
//    override fun invoke(input: Unit): Flow<RocketDetailsModel> = localRocketRepository.rocket
//}