#ifndef SPACEMARINE_HPP
#define SPACEMARINE_HPP

#include <iostream>
#include <string>

class ISpaceMarine
{
    public:
    
        virtual ~ISpaceMarine(void) { return ;}

        virtual ISpaceMarine  *clone(void) const = 0;
        virtual void battleCry() const = 0;
        virtual void rangedAttack() const = 0;
        virtual void meleeAttack() const = 0;
};

#endif