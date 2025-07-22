#include "Zombie.hpp"

Zombie::Zombie() : _name("") {
    std::cout << "A zombie has been created." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
    std::cout << "Zombie " << _name << " has been created." << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " has been destroyed." << std::endl;
}

void Zombie::announce(void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
