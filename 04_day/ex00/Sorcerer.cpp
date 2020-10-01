#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
    this->name = Sorcerer::randomName();
    this->title = "the " + Sorcerer::randomName();
    std::cout << "Some random Sorcerer called " << this->getName() << " " << this->getTitle() << " just appeared!" << std::endl;
}

Sorcerer::Sorcerer(std::string name)
{
    this->name = name;
    this->title = "the " + Sorcerer::randomName();
    std::cout << "Some random Sorcerer called " << this->getName() << " " << this->getTitle() << " just appeared!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    std::cout << "Some random Sorcerer called " << this->getName() << " " << this->getTitle() << " just appeared!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other)
{
    *this = other;
    return ;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->getName() << ", " << this->getTitle() <<", is dead. Consequences will never be the same!" << std::endl;
    return;
}

std::string const   &Sorcerer::getTitle()
{
    return (this->title);
}

void Sorcerer::polymorph(Victim const &vict) const
{
    vict.getPolymorphed();
    return ;
}
