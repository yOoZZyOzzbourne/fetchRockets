package com.example.fetchrockets

class Greeting {
    private val platform: Platform = getPlatform()

    fun greet(): String {
        return "Hello AAA, ${platform.name}!"
    }
}