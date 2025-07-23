#include <iostream>
#include "Harl.hpp"

int main() {
    std::cout << "Harl just came into the building" << std::endl;
    Harl harl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    return 0;
}