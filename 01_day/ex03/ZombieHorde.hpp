#ifndef ZOMBIEHORDE_HPP
#define  ZOMBIEHORDE_HPP

#include "Zombie.hpp"

# define _RED     "\x1b[31m"
# define _GREEN   "\x1b[32m"
# define _YELLOW  "\x1b[33m"
# define _BLUE    "\x1b[34m"
# define _MAGENTA "\x1b[35m"
# define _CYAN    "\x1b[36m"
# define _RESET   "\x1b[0m"

class ZombieHorde
{ 
    public:
    
        ZombieHorde(int n);
        ZombieHorde(void);
        ~ZombieHorde () {}

        std::string randomChump();

    private:
        
        Zombie      *z;
};

#endif