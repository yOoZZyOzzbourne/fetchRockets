//package com.volchok.rocketapp.library.api.di
//
//import com.volchok.rocketapp.library.api.data.RocketApi
//import com.volchok.rocketapp.library.api.data.RocketRepository
//import com.volchok.rocketapp.library.api.domain.GetRocketInfoUseCase
//import com.volchok.rocketapp.library.api.domain.ObserveRocketsUseCase
//import com.volchok.rocketapp.library.api.domain.RemoteRepository
////import org.ikoin.core.module.dsl.factoryOf
////import org.koin.dsl.bind
////import org.koin.dsl.module
//import retrofit2.Retrofit
//import retrofit2.converter.gson.GsonConverterFactory
//
//fun createApiClient(): RocketApi {
//        val retrofit = Retrofit.Builder()
//            .baseUrl("https://api.spacexdata.com/v3/")
//            .addConverterFactory(GsonConverterFactory.create())
//            .build()
//            .create(RocketApi::class.java)
//
//    return retrofit
//    }
