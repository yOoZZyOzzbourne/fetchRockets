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

@Serializable
data class RocketKMM(
    //@SerialName("rocket_id")
    val id: String,
    //@SerialName("rocket_name")
    val name: String,
    @SerialName("description")
    val overview: String,
    val height: LineMeasure,
    val diameter: LineMeasure,
    val mass: WeightScale,
    @SerialName("first_stage")
    val firstStage: Stage,
    @SerialName("second_stage")
    val secondStage: Stage,
    @SerialName("first_flight")
    val firstFlight: String,
    @SerialName("flickr_images")
    val photos: List<String>
) {
    @Serializable
    data class LineMeasure(
        val meters: Float,
        val feet: Float
    )

    @Serializable
    data class WeightScale(
        @SerialName("kg")
        val kilograms: Float,
        @SerialName("lb")
        val pounds: Float
    )

    @Serializable
    data class Stage(
        val reusable: Boolean,
        val engines: Int,
        @SerialName("fuel_amount_tons")
        val fuelMass: Float,
        @SerialName("burn_time_sec")
        val burnTime: Int?
    )
}