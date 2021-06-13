#include "Squad.hpp"

Squad::Squad(void)
{
    return;
}

Squad::Squad(const Squad &other)
{
	for (int i = 0; i < other.getCount(); i++)
		this->members.push_back(other.members[i]);
}

Squad &Squad::operator = (Squad &other)
{
    members.clear();
    for (int i = 0; i < other.members.size(); i++)
        this->members.push_back(other.members[i]);
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
