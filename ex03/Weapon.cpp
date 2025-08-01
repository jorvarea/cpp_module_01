#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon() {}

const std::string& Weapon::getType(void) {
    return _type;
}

void Weapon::setType(std::string newType) {
    _type = newType;
}
