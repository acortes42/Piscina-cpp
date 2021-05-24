#ifndef VICTIM_HPP
#define VICTIM_HPP

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
        std::string         change() const;

    protected:

        std::string name;
};

std::ostream&   operator<<(std::ostream &os, Victim const &arg);

#endif