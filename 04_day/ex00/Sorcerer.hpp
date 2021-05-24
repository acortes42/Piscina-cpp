#ifndef SORCERER_HPP
#define SORCERER_HPP

# include "Victim.hpp"

class Sorcerer
{
    public:

        Sorcerer(void);
        Sorcerer(std::string name);
        Sorcerer(std::string name, std::string title);
        ~Sorcerer(void);
        Sorcerer(const Sorcerer &cpy);

        std::string const   &getTitle() const;
        virtual void polymorph(Victim const &vict) const;
        std::string         randomName();
        std::string const   &getName()const;
        int                 randomBuilder() const;;




    protected:

        std::string name;
        std::string title;
};

std::ostream &	operator<<(std::ostream & ost, Sorcerer const & rhs);

#endif