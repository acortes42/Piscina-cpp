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
    
    ICharacter* moi = new Character("moi");
    
    AMateria* tmp = NULL;
    AMateria* tmp2 = NULL;
    tmp = src->createMateria("ice");
    std::cout << "Supera el create 1" << std::endl;
    moi->equip(tmp);
    std::cout << "Supera el equip 1 con " << tmp->getType() << std::endl;
    
    tmp2 = src->createMateria("cure");
    tmp2->getType();
    std::cout << "Supera el create 2" << std::endl;
    moi->equip(tmp2);
    std::cout << "Supera el equip 2 con " << tmp2->getType() << std::endl;
    
    ICharacter* bob = new Character("bob");

    moi->use(-1, *bob);
    moi->use(0, *bob);
    moi->use(0, *bob);
    moi->use(0, *bob);
    moi->use(1, *bob);
    moi->use(2, *bob);
    std::cout << tmp->getType() << " xp = " << tmp->getXP() << std::endl;
    std::cout <<  tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;
    moi->unequip(0);
    moi->use(0, *bob);
    moi->use(1, *bob);
    std::cout <<  tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;
    
    delete bob;
    delete moi;
    delete src;
    
    return 0;
}