#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
    public:
        HumanB(std::string name);
        void attack(void);
        void setWeapon(Weapon& newWeapon);
    private:
        std::string _name;
        Weapon* _weapon;
};

#endif