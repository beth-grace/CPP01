#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *newbie_zombie = new Zombie(name);
    newbie_zombie->announce();
    return (newbie_zombie);
}