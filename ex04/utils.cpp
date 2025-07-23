#include "utils.hpp"
#include <cstddef>
#include <iostream>

void fill_buffer(std::ifstream& file, std::string& buffer) {
    std::string line;

    while (std::getline(file, line)) {
        buffer += line + "\n";
    }
}

void find_and_replace(std::string& content, std::string s1, std::string s2) {
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }
}
