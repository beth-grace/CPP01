#pragma once

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
private :
    std::string _name;
    Weapon &_weapon;

public :
    HumanA(const std::string name, Weapon &weapon);
    ~HumanA();

    void    attack(void);
};