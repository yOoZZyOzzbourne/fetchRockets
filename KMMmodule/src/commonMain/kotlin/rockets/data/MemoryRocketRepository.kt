package rockets.data

import rockets.domain.RocketRepository

class MemoryRocketRepository : RocketRepository {
    override var selectedRocketId: String = ""
}