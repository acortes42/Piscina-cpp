#include "Peon.hpp"

Peon::Peon(void)
{
    this->name = Peon::randomName();
    std::cout << "Some random Peon called " << this->getName() << " just appeared!" << std::endl;
}

Peon::Peon(std::string name)
{
    this->name = name;
    std::cout << "Some random Peon called " << this->getName() << " just appeared!" << std::endl;
}

Peon::Peon(const Peon &other)
{
    *this = other;
    return ;
}

Peon::~Peon(void)
{
    std::cout << "Peon " << this->getName() << " just died for no apparent reason!" << std::endl;
    return;
}