plugins {
    kotlin("multiplatform")
    id("com.android.library")
    id("com.chromaticnoise.multiplatform-swiftpackage") version "2.0.3"
    kotlin("plugin.serialization") version "1.8.22"
}

@OptIn(org.jetbrains.kotlin.gradle.ExperimentalKotlinGradlePluginApi::class)
kotlin {
    targetHierarchy.default()

    multiplatformSwiftPackage {
        packageName("KMMmodule")
        swiftToolsVersion("5.3")
        targetPlatforms {
            iOS { v("13") }
        }
        outputDirectory(File(rootDir, "/"))
    }


    android {
        compilations.all {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }
    
    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = "KMMmodule"
        }
    }

    sourceSets {
        val ktorVersion = "2.3.1"

        val commonMain by getting {
            dependencies {
                //put your multiplatform dependencies here

//                implementation("io.ktor:ktor-client-core:$ktorVersion")
//                implementation("io.ktor:ktor-client-core:1.6.1") // Core Ktor client dependency
//                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.3.0") // Serialization dependency
                implementation("io.ktor:ktor-client-json:$ktorVersion")
//                implementation("io.ktor:ktor-client-core:1.6.1")
//                implementation("io.ktor:ktor-client-serialization:1.6.1") // For KotlinxSerializer
                implementation("io.ktor:ktor-client-core:$ktorVersion")
                implementation("io.ktor:ktor-client-cio:$ktorVersion")
                implementation("io.ktor:ktor-client-logging:$ktorVersion")
                implementation("io.ktor:ktor-client-content-negotiation:$ktorVersion")
                implementation("io.ktor:ktor-serialization-kotlinx-json:$ktorVersion")
                //implementation("com.squareup.okhttp3:okhttp:4.9.1")
                // Add Koin dependency
                //implementation("io.insert-koin:koin-core:3.1.2")
                // Add Flow and flow import statements
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.4")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test"))
            }
        }

        val androidMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-android:$ktorVersion")
            }
        }

        val iosMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-ios:$ktorVersion")
            }
        }
    }
}

android {
    namespace = "com.example.fetchRockets"
    compileSdk = 33
    defaultConfig {
        minSdk = 24
    }
    buildToolsVersion = "33.0.1"
}
dependencies {
    implementation("androidx.lifecycle:lifecycle-common:2.6.1")
}

