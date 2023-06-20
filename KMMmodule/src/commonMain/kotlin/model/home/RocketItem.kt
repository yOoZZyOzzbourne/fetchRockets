package model.home

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.*
import kotlinx.serialization.json.*
import kotlinx.serialization.descriptors.*
import kotlinx.serialization.encoding.*


@Serializable
data class RocketItem(
    @SerialName("rocket_id")
    val rocketID: String? = null,
    @SerialName("first_flight")
    val firstFlight: String? = null,
    @SerialName("rocket_name")
    val rocketName: String? = null,
)

// To parse the JSON, install kotlin's serialization plugin and do:
//
// val json    = Json { allowStructuredMapKeys = true }
// val welcome = json.parse(Welcome.serializer(), jsonString)

@Serializable
public data class Rocket (
    val id: String,
    val name: String,
    val height: Diameter,
    val diameter: Diameter,
    val mass: Mass,

    @SerialName("first_stage")
    val firstStage: FirstStage,

    @SerialName("second_stage")
    val secondStage: SecondStage,

    val engines: Engines,

    @SerialName("flickr_images")
    val flickrImages: List<String>,

    val type: String,
    val stages: Long,

    @SerialName("first_flight")
    val firstFlight: String,

    val description: String
)

@Serializable
public data class Diameter (
    val meters: Float? = null,
    val feet: Float? = null
)

@Serializable
data class Engines (
    val number: Long,
    val type: String,
)


@Serializable
data class FirstStage (
    val reusable: Boolean,
    val engines: Long,

    @SerialName("fuel_amount_tons")
    val fuelAmountTons: Double,

    @SerialName("burn_time_sec")
    val burnTimeSEC: Long? = null
)


@Serializable
data class Mass (
    val kg: Float,
    val lb: Float
)

@Serializable
data class SecondStage (
    val reusable: Boolean,
    val engines: Long,

    @SerialName("fuel_amount_tons")
    val fuelAmountTons: Float,

    @SerialName("burn_time_sec")
    val burnTimeSEC: Long? = null
)