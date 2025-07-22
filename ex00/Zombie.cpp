#include "Zombie.hpp"

Zombie::Zombie() : _name("") {}
Zombie::Zombie(std::string name) : _name(name) {}
Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " has been destroyed." << std::endl;
}

void Zombie::announce(void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
