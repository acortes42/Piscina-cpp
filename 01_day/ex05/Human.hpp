#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class human
{
    public:

        human(void);
        ~human(void);

        brain *getBrain(void);
        human * identify(void){return this;};

    private:
        brain &brain;

};


#endif