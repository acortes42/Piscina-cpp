#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
    public:
    
        AssaultTerminator();
        AssaultTerminator(const AssaultTerminator &other);
        AssaultTerminator   &operator = (const AssaultTerminator &other);

        ~AssaultTerminator(void);

        ISpaceMarine *clone(void) const;

        void birth() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif