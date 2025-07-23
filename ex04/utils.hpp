#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <fstream>

void fill_buffer(std::ifstream& file, std::string& buffer);
void find_and_replace(std::string& content, std::string s1, std::string s2);

#endif
