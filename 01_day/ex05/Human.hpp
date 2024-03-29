#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
    public:

        Human(void);
        ~Human(void);

        Brain   &getBrain(void);
        std::string identify(void){return this->getBrain().identify();};

    private:
        Brain *brain;
};

#endif
