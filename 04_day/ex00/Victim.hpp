#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>
#include <sys/time.h>

class Victim
{
    public:

        Victim(void);
        Victim(std::string name);
        ~Victim(void);
        Victim(const Victim &cpy);

        int                 randomBuilder() const;
        std::string         randomName();
        std::string const   &getName()const;
        std::string         introduce()const;
        void                getPolymorphed()const;




    protected:

        std::string name;
};

std::ostream&   operator<<(std::ostream &os, Victim const &arg);

#endif