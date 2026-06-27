#include "huffman.h"
#include <fstream>
#include <iostream>

std::unordered_map<char, int> buildFrequencyMap(const std::string& filePath) {
    std::unordered_map<char, int> freqMap;
    
    // Open the file in binary mode to ensure we catch everything accurately
    std::ifstream inFile(filePath, std::ios::binary);
    
    if (!inFile.is_open()) {
        std::cerr << "Error: Could not open file " << filePath << std::endl;
        return freqMap;
    }

    char ch;
    // Read the file byte by byte
    while (inFile.get(ch)) {
        freqMap[ch]++;
    }

    inFile.close();
    return freqMap;
}