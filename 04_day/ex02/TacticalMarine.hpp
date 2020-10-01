#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
    public:
    
        TacticalMarine();
        ~TacticalMarine();
        TacticalMarine(const TacticalMarine &cpy);

        TacticalMarine &operator= (const TacticalMarine &soldier);

        virtual ISpaceMarine  *clone(void) const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif