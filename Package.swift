// swift-tools-version:5.3
import PackageDescription
let package = Package(
  name: "BanubaSDKServicing",
  platforms: [
    .iOS(.v12)
  ],
  products: [
    .library(
      name: "BanubaSDKServicing", 
      targets: ["BanubaSDKServicing"])
  ],
  targets: [
    .binaryTarget(
      name: "BanubaSDKServicing", 
      path: "BanubaSDKServicing.xcframework")
  ])
