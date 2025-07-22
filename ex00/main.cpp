#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    std::cout << "Creating a new zombie..." << std::endl;
    Zombie* zombie1 = newZombie("NewZombie");
    zombie1->announce();

    std::cout << "Creating a random zombie..." << std::endl;
    randomChump("RandomZombie");

    delete zombie1;
    return (0);
}
