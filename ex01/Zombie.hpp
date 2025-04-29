#pragma once
#include <string>
#include <iostream>

class Zombie
{
    private :
        std::string _name;
    public :
        Zombie();
        ~Zombie();
    void    announce(void)const;
    void    set_name(std::string const name);

};

Zombie *zombieHorde(int N, std::string const name);