#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent zEvent;

	Zombie *z1 = zEvent.newZombie("Bitter");
	std::cout << _GREEN;
	z1->announce();
	Zombie *z2 = zEvent.randomChump();
	z2->announce();
    delete(z1);
    delete(z2);
	std::cout << _RESET;
    return (1);
}