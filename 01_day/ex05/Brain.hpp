#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <memory>


class brain
{
    public:

        brain(void);
        ~brain(void);

        std::string getAdrr();
        brain * identify(void){return this;};

    private:

        std::string id;

};


#endif