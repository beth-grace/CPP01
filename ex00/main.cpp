#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie = newZombie("NewKidOnTheBlock");
	randomChump("Numbskull");
	delete zombie;
	return (0);
}