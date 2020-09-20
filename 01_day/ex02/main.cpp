#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent zEvent;

	Zombie *z1 = zEvent.newZombie("Bitter");
	z1->announce();
	Zombie *z2 = zEvent.randomChump();
	z2->announce();
    delete(z1);
    delete(z2);
    return (1);
}