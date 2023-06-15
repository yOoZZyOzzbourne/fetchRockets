package com.example.fetchrockets

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform