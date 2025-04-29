#pragma once
#include <string>
#include <iostream>

class Zombie{
    private :
        std::string _name;
    public :
        Zombie(const std::string s);
        ~Zombie();
    void    announce(void)const;

};

Zombie *newZombie(std::string const name);
void    randomChump(std::string const name);