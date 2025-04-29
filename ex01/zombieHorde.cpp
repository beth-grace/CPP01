#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if( N < 1)
    {
        std::cout << "NAURRR HORDE CAN'T BE LESS THAN ONE CLEO" << std::endl;
        return (NULL);
    }
    Zombie *horde = new Zombie[N];
    if(horde == NULL)
    {
        std::cout << "BOOHOO NO HORDE FOR YOU, HORDE FAILED!" << std::endl;
        return (NULL);
    }
	for (int i = 0; i <= N; i++)
		horde[i].set_name(name);
    return (horde);
}