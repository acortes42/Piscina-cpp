#include "Squad.hpp"

Squad::Squad(void)
{
    return;
}

Squad::Squad(const Squad &other)
{
    *this = other;
    return ;
}

Squad &Squad::operator = (const Squad &other)
{
    return (*this);
}

Squad::~Squad(void)
{
    members.clear();
    return;
}
        
int Squad::getCount() const
{
    return(this->members.size());
}

ISpaceMarine* Squad::getUnit(int n) const
{
    if (this->getCount() >= n)
        return (this->members[n]);
    else
        std::cout << "The soldier isn't here" << std::endl;
    return (NULL);
}

int Squad::push(ISpaceMarine* soldier)
{
    this->members.push_back(soldier);
    return (this->getCount());
}
