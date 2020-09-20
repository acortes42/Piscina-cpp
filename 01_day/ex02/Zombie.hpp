#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sys/time.h>

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