#include "Zombie.hpp"

Zombie::Zombie(std::string s) : _name(s)
{
    std::cout << "Me name's " << _name << std::cout << ", I want you brain." << "\n" << std::endl;
} 
Zombie::~Zombie()
{
    std::cout << "Ow." << _name << std::cout << "has died. Sadge :'(("<< "\n" << std::endl;
}

void   Zombie::announce(void) const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}