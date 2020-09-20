#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <string>
#include <algorithm>

class Pony 
{
    public:
        void  ponyColor(std::string str);
        void  ponyAge(std::string str);
        void  ponySex(std::string str);
        void  ponyName(std::string str);
        void  priceInEuros(std::string str);
        void  ponyInfo(std::string name, std::string color, std::string age, std::string sex, std::string value);
        void  getAllInfo();
    private:
        std::string name;
        std::string color;
        std::string age;
        std::string sex;
        std::string value;
};

#endif
