#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sys/time.h>

# define _RED     "\x1b[31m"
# define _GREEN   "\x1b[32m"
# define _YELLOW  "\x1b[33m"
# define _BLUE    "\x1b[34m"
# define _MAGENTA "\x1b[35m"
# define _CYAN    "\x1b[36m"
# define _RESET   "\x1b[0m"

class Zombie
{
    public:
        void announce(void);
        Zombie(std::string, std::string);
        std::string type;
        std::string name;
};

void announce();
int randomAlgo();

#endif