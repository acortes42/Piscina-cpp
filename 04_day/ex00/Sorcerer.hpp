#ifndef SORCERER_HPP
#define SORCERER_HPP

# include "Victim.hpp"

class Sorcerer: virtual public Victim
{
    public:

        Sorcerer(void);
        Sorcerer(std::string name);
        Sorcerer(std::string name, std::string title);
        ~Sorcerer(void);
        Sorcerer(const Sorcerer &cpy);

        std::string const   &getTitle();
        virtual void polymorph(Victim const &vict) const;




    protected:

        std::string name;
        std::string title;
};

#endif