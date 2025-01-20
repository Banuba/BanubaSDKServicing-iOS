// swift-tools-version:5.9

import PackageDescription

let package = Package(
  name: "BanubaSDKServicing",
  platforms: [
    .iOS(.v17)
  ],
  products: [
    .library(
      name: "BanubaSDKServicing",
      targets: ["BanubaSDKServicing"]
    )
  ],
  targets: [
    .binaryTarget(
      name: "BanubaSDKServicing",
      path: "BanubaSDKServicing.xcframework"
    )
  ]
)
