# fetchRockets
KMM module for iOS solution application

Simple library in Kotlin Multiplatform Mobile that has REST API requests,
that are used in our example app for iOS version in Quanti 
https://github.com/Qase/mobile-assignment

KMM is used in both iOS (Swift) and Android (Kotlin) versions of mobile development, its new a inovative way of creating shared code for apps.
In this case this is shared use case of `RocketClient` that does the background work of creating api request, serializing (parsing) data from `json` to struct/class and then sending
 it into our platform-specific project. 
 
_Implementation coming soon_

## API requests: 
```Kotlin 
 fetchAllRockets(): RocketResult<List<RocketKMM>>
 fetchRocketById(rocketId: String): RocketResutl<RocketKMM>
 fetchFailRockets: RocketResult<RocketException> // Made for testing error handling
```

`RocketKMM` is basically `DTO` model for rocket api - https://api.spacexdata.com/v4/rockets/

`RocketResult` is custom result type (Success and Failure) used because Swift cannot handle build in Result type and casts it as a `Any?`.

## NativeCoroutines
 - All functions are using `@NativeCoroutines` modifier that is from special library:
https://github.com/rickclephas/KMP-NativeCoroutines.git
 - This basically creates "new" functions, that are thread-safe. Those functions are called differently.

## How to use it in Swift
Calling basic functions in Swift is very easy, just declare the struct and then use the functions like so:
```Swift 
 let rocketApi = RocketApi()
 let rockets = try await rocketApi.fetchAllRockets()
```
  and handle errors in `do-catch` clause.

Functions in **NativeCoroutines** are handled this way:
```Swift 
 let rockets = try await asyncFunction(for: rocketApi.fetchAllRockets())
```
  note that the `asyncFunction` is from **NativeCoroutines** library that needs to be imported.

## Full implementation in Swift:
```Swift 
  do {
       let rocket = try await asyncFunction(for: rocketApi.fetchAllRockets())
 //MARK: Even though warning is saying "always fails" it in fact does not fail at all. Swift is confused about KMM. - Ignore this warrning
       if let success = rocket as? RocketResultSuccess<AnyObject> {
          //Custom mapping into domain model
            return success
        } else if let failure = rocket as? RocketResult<RocketException> {
          //Custoom error mapping to domain error
        }
          throw DomainError
     } catch {
       throw error
     }
```
