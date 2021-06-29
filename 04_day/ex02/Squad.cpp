#include "Squad.hpp"

Squad::Squad(void)
{
    this->count = 0;
    return;
}

Squad::Squad(const Squad &other)
{
    this->count = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
}

Squad &Squad::operator = (Squad &other)
{
    if (this->getCount())
	{
		for (int i = 0; i < this->getCount(); i++)
			delete (this->members[i]);
	}
    this->count = other.count;
    for (int i = 0; i < other.getCount(); i++)
        this->members[i] = other.members[i];
    return (*this);
}

Squad::~Squad() 
{
	if (this->members)
	{
		for (int i = 0; i < this->count; i++)
        {
            std::cout << "Wololo " << i << std::endl;
			delete this->members[i];
        }
	}
}
        
int Squad::getCount() const
{
    return(this->count);
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
    if (!soldier || this->count > 49)
        return (this->count);
    if (this->members)
   {
		this->members[this->count] = soldier;
		this->count++;
    }
    else
    {
		this->members[0] = soldier;
		this->count = 1;
    }
	return (this->count);
}
