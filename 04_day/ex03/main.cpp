#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

//  este ejercicio esta mal aun

int main()
{
    IMateriaSource* src = new MateriaSource();
    ICharacter* me = new Character("me");
    AMateria* tmp;

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    std::cout << "here" << std::endl;
    me->use(0, *bob);
    std::cout << "here" << std::endl;
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}