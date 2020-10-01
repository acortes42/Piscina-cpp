#ifndef Peon_HPP
#define Peon_HPP

#include "Victim.hpp"

class Peon: virtual public Victim
{
    public:

        Peon(void);
        Peon(std::string name);
        ~Peon(void);
        Peon(const Peon &cpy);

    protected:

        std::string name;
};

#endif