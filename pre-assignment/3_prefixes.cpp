#include <stdlib.h>

#include <iostream>
#include <string>
#include <vector>

class TrieNode {
public:
    TrieNode* children[26] = {nullptr};
    std::vector<int> vals;
};

class WordFilter {
private:
    TrieNode *pTrie, *sTrie;

public:
    WordFilter(std::vector<std::string>& words) {
        pTrie = {};
        for (int index = 0; index < words.size(); index++) {
            std::string word = words[index];
            insert(word, index, pTrie);
        }
    }

    void insert(std::string word, int index, TrieNode* trie) {
        for (auto c : word) {
            int cval = c - 'a';
            if (!trie->children[cval])
                trie->children[cval] = {};
            trie = trie->children[cval];
            trie->vals.push_back(index);
        }
    }

    std::vector<int>* retrieve(std::string str, TrieNode* trie) {
        for (auto c : str) {
            trie = trie->children[c-'a'];
            if (!trie) return nullptr;
        }
        return &trie->vals;
    }

    int f(std::string pre) {
        std::vector<int>* pVals = retrieve(pre, pTrie);
        int pvix = pVals->size() - 1;
        while (~pvix) {
            int pVal = (*pVals)[pvix];
            pvix--;
        }
        return -1;
    }
};


int main(int argc, char **argv) {
  (void)argc; (void)argv;  
  size_t dict_size;
  std::vector<std::string> dictionary;
  if (!(std::cin >> dict_size)) abort(); 
  dictionary.reserve(dict_size);
  for (size_t i = 0; i < dict_size; ++i) {
    std::string dict_word;
    if (!(std::cin >> dict_word)) abort(); 
    dictionary.push_back(dict_word);
  }
    WordFilter wf(dictionary);

  size_t query_size;
  if (!(std::cin >> query_size)) abort();
  for (size_t i = 0; i < query_size; ++i) {
    std::string query;
    if (!(std::cin >> query)) abort();
    // ... process the query
  }
  return 0;
}