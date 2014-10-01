#include "Trie.h"
#include <iostream>

using namespace std;

Trie::Trie(){
    root = TrieNode();
    root.nodeId = 0;
    root.tag = "";
    root.terminal = false;
}

Trie::~Trie(){
}
