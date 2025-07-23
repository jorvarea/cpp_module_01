#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
    public:
        HumanA(std::string name, Weapon& weapon);
        void attack(void);
    private:
        std::string _name;
        Weapon& _weapon;
};

#endif
