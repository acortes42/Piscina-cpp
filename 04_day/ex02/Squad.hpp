#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad: public ISquad
{
    public:
        
        Squad();
        virtual ~Squad();
        Squad(const Squad&);
        Squad   &operator = (Squad &other);

        int getCount() const;
        ISpaceMarine* getUnit(int) const;
        int push(ISpaceMarine*);

    private:
        std::vector<ISpaceMarine*> members;
};

#endif