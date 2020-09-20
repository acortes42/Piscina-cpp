#ifndef ZOMBIEHORDE_HPP
#define  ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{ 
    public:
    
        ZombieHorde(int n);
        ZombieHorde(void);

        std::string randomChump();

    private:
        
        Zombie      *z;
};

#endif