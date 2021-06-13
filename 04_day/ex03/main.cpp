#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    AMateria* tmp2;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp2 = src->createMateria("cure");
    me->equip(tmp2);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(1, *bob);
    me->use(1, *bob);
    me->use(1, *bob);
    std::cout << tmp->getType() << " xp = " << tmp->getXP() << std::endl;
    std::cout <<  tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;
    
    delete bob;
    delete me;
    delete src;
    return 0;
}