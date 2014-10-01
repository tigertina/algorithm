#ifndef TRIE_H
#define TRIE_H

#include<string>

using namespace std;

typedef struct TrieNode{
    //Node Id
    int nodeId;
    //Tag
    string tag;
    //Terminal
    bool terminal;
    //children of this node
    TrieNode *children[];
    char **output;
}TrieNode;

class Trie
{
    public:
        Trie();
        virtual ~Trie();
    protected:
    private:
        TrieNode root;
};

#endif // TRIE_H
