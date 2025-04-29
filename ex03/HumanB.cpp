#include "HumanB.hpp"

HumanB::HumanB(const std::string name)
{
    this->_name = name;
    this->_is_armed = false;
    std::cout << this->_name << "joined the battlefield." << std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->_name << "has died." << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
    this->_is_armed = true;
    std::cout << this->_name << "grabbed a " << this->_weapon->getType() << "to fight." << std::endl;
}

void    HumanB::attack(void)
{
    if (this->_is_armed)
       std::cout << this->_name << "attacks with his" << this->_weapon->getType() << "." << std::endl;
    else
        std::cout << this->_name << "attacks with his bare fists" << std::endl;      
}