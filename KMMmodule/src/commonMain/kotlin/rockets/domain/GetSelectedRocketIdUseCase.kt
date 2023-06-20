package rockets.domain

import domain.SynchronousUseCase

class GetSelectedRocketIdUseCase(
    private val repository: RocketRepository
) : SynchronousUseCase<Unit, String> {
    override fun invoke(input: Unit): String = repository.selectedRocketId
}