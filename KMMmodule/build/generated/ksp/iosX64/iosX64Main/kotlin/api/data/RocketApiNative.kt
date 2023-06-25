package api.`data`

import com.rickclephas.kmp.nativecoroutines.NativeSuspend
import com.rickclephas.kmp.nativecoroutines.nativeSuspend
import kotlin.collections.List
import kotlin.native.ObjCName
import model.home.RocketKMM

@ObjCName(name = "fetchAllRockets")
public fun RocketApi.fetchAllRocketsNative(): NativeSuspend<RocketResult<List<RocketKMM>>> =
    nativeSuspend(null) { fetchAllRockets() }
