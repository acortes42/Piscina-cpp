#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
    public:

        Character(std::string const &name);
        Character(Character const &other);
        virtual ~Character();

        Character &operator=(Character const &other);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    
    private:

        Character();
        std::string     name;
        unsigned int    maxSlots;
        AMateria        *magicSlots[4];
        unsigned int    usedSlots;

};

#endif