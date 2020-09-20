#ifndef ZOMBIEEVENT_HPP
#define  ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{ 
    public:
        void        setZombieType(Zombie   *z, std::string str);
        Zombie      *newZombie(std::string name);
        Zombie      *randomChump();
};

#endif