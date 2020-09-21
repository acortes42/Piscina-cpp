#ifndef ZOMBIEHORDE_HPP
#define  ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{ 
    public:
    
        ZombieHorde(int n);
        ZombieHorde(void);
        ~ZombieHorde () {delete z;}

        std::string randomChump();

    private:
        
        Zombie      *z;
};

#endif