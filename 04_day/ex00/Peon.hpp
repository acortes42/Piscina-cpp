#ifndef Peon_HPP
#define Peon_HPP

#include "Victim.hpp"

class Peon: public Victim
{
    public:

        Peon(void);
        Peon(std::string const & name);
        ~Peon(void);
        Peon(const Peon &cpy);

    protected:

        std::string name;
};

#endif