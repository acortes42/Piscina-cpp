#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{   
    int n;

    n = 0;
    while (n < 4)
    {
		this->magicSlots[n] = nullptr;
        n++;
    }
    this->magicNum = 0;
}

MateriaSource::~MateriaSource()
{   
    int n;

    n = 0;
    while (n < 4)
    {
		delete this->magicSlots[n];
        n++;
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    int n;

    n = 0;
    this->magicNum = other.magicNum;
    while (n < 4)
    {
		delete this->magicSlots[n];
        n++;
    }
    n = 0;
	while (n < 4)
    {
		this->learnMateria(other.magicSlots[n]->clone());
        n++;
    }
    n = 0;
    while (n < 4)
    {
		this->magicSlots[n] = nullptr;
        n++;
    }
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->magicNum  == 4 || m == nullptr)
		return ;
	for (int i = 0; i < this->magicNum; i++)
		if (this->magicSlots[i] == m)
			return ;
	this->magicSlots[this->magicNum++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->magicNum; i++)
		if (this->magicSlots[i]->getType() == type)
			return (this->magicSlots[i]->clone());
	return (nullptr);
}
