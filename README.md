# fetchRockets
KMM module for iOS solution application

Simple library in Kotlin Multiplatform Mobile that has REST API requests,
that are used in our example app for iOS version in Quanti 
https://github.com/Qase/mobile-assignment

KMM is used in both iOS (Swift) and Android (Kotlin) versions of mobile development,
 its new a inovative way of creating shared code for apps.
In this case this is shared use case of `RocketClient` that does the background work of
 creating api request, serializing (parsing) data from `json` to struct/class and then sending
 it into our platform-specific project. 
 
_Implementation coming soon_

## API requests: 
  - `fetchAllRockets(): List<RocketKMM>`
  - `fetchRocketById(rocketId: String): RocketKMM`

`RocketKMM` is basically `DTO` model for rocket api - https://api.spacexdata.com/v4/rockets/

Calling the functions in Swift is very easy, just declare the struct: 
   - `let rocketApi = RocketApi()`
  and then use the functions like so:
   - `let rockets = try await rocketApi.fetchAllRockets()`
  and handle errors in `do-catch` clause
  
