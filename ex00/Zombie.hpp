#pragma once
#include <string>
#include <iostream>

class Zombie{
    private :
        std::string _name;
    public :
        Zombie(std::string s);
        ~Zombie();
    void    announce(void)const;

};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);