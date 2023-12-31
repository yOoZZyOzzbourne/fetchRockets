package api.`data`

import com.rickclephas.kmp.nativecoroutines.NativeSuspend
import com.rickclephas.kmp.nativecoroutines.nativeSuspend
import kotlin.String
import kotlin.collections.List
import kotlin.native.ObjCName
import model.RocketKMM

@ObjCName(name = "fetchAllRockets")
public fun RocketApi.fetchAllRocketsNative(): NativeSuspend<RocketResult<List<RocketKMM>>> =
    nativeSuspend(null) { fetchAllRockets() }

@ObjCName(name = "fetchRocketById")
public fun RocketApi.fetchRocketByIdNative(rocketId: String): NativeSuspend<RocketResult<RocketKMM>>
    = nativeSuspend(null) { fetchRocketById(rocketId) }

@ObjCName(name = "fetchFailRockets")
public fun RocketApi.fetchFailRocketsNative(): NativeSuspend<RocketResult<List<RocketKMM>>> =
    nativeSuspend(null) { fetchFailRockets() }
