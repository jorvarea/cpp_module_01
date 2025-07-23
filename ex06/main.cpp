#include <iostream>
#include "Harl.hpp"

int main(int argc, char** argv) {
    if (argc != 2)
    {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }

    Harl harl;
    harl.filterComplains(argv[1]);
    return 0;
}