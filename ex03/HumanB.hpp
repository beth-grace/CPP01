#pragma once

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
    private:
        std::string _name;
        Weapon *_weapon;
        bool _is_armed;
    public:
        HumanB(const std::string name);
       ~HumanB(void);

       void setWeapon(Weapon &weapon);
       void attack(void);
};