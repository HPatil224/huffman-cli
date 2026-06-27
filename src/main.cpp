#include <iostream>
#include "huffman.h"

int main(int argc, char* argv[]) {
    // Basic verification of command-line arguments
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <input_file_path>" << std::endl;
        return 1;
    }

    std::string filePath = argv[1];
    std::cout << "Reading file: " << filePath << " ...\n" << std::endl;

    // Execute Phase 0 logic
    std::unordered_map<char, int> freqMap = buildFrequencyMap(filePath);

    if (freqMap.empty()) {
        std::cout << "File is empty or could not be processed." << std::endl;
        return 1;
    }

    // Print out frequencies to verify our map works perfectly
    std::cout << "--- Character Frequencies ---" << std::endl;
    for (const auto& pair : freqMap) {
        // Pretty print for newlines and spaces so the console looks clean
        if (pair.first == '\n') std::cout << "\\n : " << pair.second << std::endl;
        else if (pair.first == ' ') std::cout << "' ' : " << pair.second << std::endl;
        else std::cout << pair.first << "   : " << pair.second << std::endl;
    }

    return 0;
}