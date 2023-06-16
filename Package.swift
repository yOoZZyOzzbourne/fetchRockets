// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "KMMmodule",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "KMMmodule",
            targets: ["KMMmodule"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "KMMmodule",
            path: "./KMMmodule.xcframework"
        ),
    ]
)
