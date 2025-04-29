#include "Zombie.hpp"

Zombie::Zombie()
{
} 
Zombie::~Zombie()
{
    std::cout << "Ow." << _name << "has died. Sadge :'(("<< "\n" << std::endl;
}

void   Zombie::announce(void) const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->_name = name;
}