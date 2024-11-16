import XCTest
import SwiftTreeSitter
import TreeSitterWng

final class TreeSitterWngTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_wng())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Wng grammar")
    }
}
