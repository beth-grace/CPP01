#pragma once

#include <string>
#include <iostream>

class Weapon
{
    private :
     std::string _type;   

    public :
    Weapon(const std::string &weapon);
    ~Weapon();

    std::string getType(void) const;
    void setType(const std::string &weapon);

};