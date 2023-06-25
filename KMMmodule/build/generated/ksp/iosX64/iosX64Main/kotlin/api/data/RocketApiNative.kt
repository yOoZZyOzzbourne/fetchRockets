package api.`data`

import com.rickclephas.kmp.nativecoroutines.NativeSuspend
import com.rickclephas.kmp.nativecoroutines.nativeSuspend
import kotlin.Result
import kotlin.collections.List
import kotlin.native.ObjCName
import model.home.RocketKMM

@ObjCName(name = "fetchAllRockets")
public fun RocketApi.fetchAllRocketsNative(): NativeSuspend<Result<List<RocketKMM>>> =
    nativeSuspend(null) { fetchAllRockets() }
