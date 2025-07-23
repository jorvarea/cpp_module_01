#include <iostream>
#include "Harl.hpp"

int main() {
    std::cout << "Harl just came into the building" << std::endl;
    Harl harl;
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    return 0;
}