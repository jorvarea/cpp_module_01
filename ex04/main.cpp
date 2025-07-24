#include "utils.hpp"
#include <iostream>

int main(int argc, char** argv) {
    std::string buffer;

    if (argc != 4) {
        std::cerr << "Usage: ./a.out <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    if (argv[2][0] == '\0')
    {
        std::cerr << "Empty string to replace" << std::endl;
        return 1;
    }

    std::ifstream fin(argv[1]);
    if (!fin.is_open()) {
        std::cerr << "Error opening input file " << argv[1] << std::endl;
        return 1;
    }
    fill_buffer(fin, buffer);
    fin.close();

    find_and_replace(buffer, argv[2],argv[3]);

    std::string fout_name = std::string(argv[1]) + ".replace";
    std::ofstream fout(fout_name.c_str());
    if (!fout.is_open()) {
        std::cerr << "Error opening output file " << fout_name << std::endl;
        return 1;
    }
    fout << buffer;
    fout.close();

    return 0;
}