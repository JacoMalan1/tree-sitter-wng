package tree_sitter_wng_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_wng "github.com/tree-sitter/tree-sitter-wng/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_wng.Language())
	if language == nil {
		t.Errorf("Error loading Wng grammar")
	}
}
