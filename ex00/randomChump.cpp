#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie rando_zombie(name);
    rando_zombie.announce();
}