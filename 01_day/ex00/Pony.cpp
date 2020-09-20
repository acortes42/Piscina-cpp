#include "Pony.hpp"

void Pony::ponyColor(std::string str)
{
    this->color = str;
    return ;
}

void Pony::ponyAge(std::string str)
{
    this->age = str;
    return ;
}

void Pony::ponyName(std::string str)
{
    this->name = str;
    return ;
}

void Pony::ponySex(std::string str)
{
    this->sex = str;
    return ;
}

void    Pony::priceInEuros(std::string str)
{
    this->value = str;
    return ;
}

void    Pony::ponyInfo(std::string name, std::string color, std::string age, std::string sex, std::string value)
{
    this->name = name;
    this->color = color;
    this->age = age;
    this->sex = sex;
    this->value = value;
}

void Pony::getAllInfo()
{
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Age: " << this->age << std::endl;
    std::cout << "Sex: " << this->sex << std::endl;
    std::cout << "Color: " << this->color << std::endl;
    std::cout << "Value: " << this->value << std::endl;
}