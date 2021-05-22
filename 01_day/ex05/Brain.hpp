#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <memory>


class Brain
{
    public:

        Brain(void);
        ~Brain(void);

        std::string getAdrr();
        std::string identify();

    private:

        std::string id;

};


#endif