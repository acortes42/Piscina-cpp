#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class AMateria;
# include "ICharacter.hpp"

class AMateria
{
    public:

        AMateria();
        AMateria(std::string const & type);
        virtual~AMateria();
        AMateria &operator=(const AMateria& other);

        std::string const & getType() const;
        unsigned int getXP() const;
        
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    protected:
        unsigned int xp;
        std::string  type;
        int          inSlots;
        int          slotNum;
};

#endif