#include "Harl.hpp"
#include <iostream>

Harl::Harl() {
    std::cout << "Harl just came into the building" << std::endl;
};

Harl::~Harl() {
    std::cout << "Harl just left the building" << std::endl;
};

void Harl::debug(void) {
    std::cout << "[ DEBUG ] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::filterComplains(std::string level) {
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void (Harl::*methods[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    int index = -1;
    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            index = i;
            break;
        }
    }

    switch (index) {
        case 0:
            (this->*methods[0])();
        case 1:
            (this->*methods[1])();
        case 2:
            (this->*methods[2])();
        case 3:
            (this->*methods[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
