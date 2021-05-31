#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad: public ISquad
{
    public:
        
        Squad();
        ~Squad();
        Squad(const Squad &cpy);
        Squad   &operator = (const Squad &other);

        int getCount() const;
        ISpaceMarine* getUnit(int) const;
        int push(ISpaceMarine*);

    private:
        std::vector<ISpaceMarine*> members;
};

#endif