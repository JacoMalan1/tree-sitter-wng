// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterWng",
    products: [
        .library(name: "TreeSitterWng", targets: ["TreeSitterWng"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterWng",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterWngTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterWng",
            ],
            path: "bindings/swift/TreeSitterWngTests"
        )
    ],
    cLanguageStandard: .c11
)
