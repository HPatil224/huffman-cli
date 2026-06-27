#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <unordered_map>
#include <string>

// The building block of our Huffman Tree
struct HuffmanNode {
    char ch;
    int freq;
    HuffmanNode* left;
    HuffmanNode* right;

    // Constructor for leaf nodes (actual characters)
    HuffmanNode(char character, int frequency) 
        : ch(character), freq(frequency), left(nullptr), right(nullptr) {}

    // Constructor for internal nodes (combined nodes)
    HuffmanNode(int frequency, HuffmanNode* l, HuffmanNode* r) 
        : ch('\0'), freq(frequency), left(l), right(r) {}
};

// Function declarations we will implement soon
std::unordered_map<char, int> buildFrequencyMap(const std::string& filePath);

#endif // HUFFMAN_H