#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"


int main()
{
    Character* me = new Character("me");
    std::cout << *me;

    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* a;
    Enemy   *b2;

    a = pr;
    b2 = b;

    me->equip(a);
    std::cout << *me;
    me->equip(pf);
    me->attack(b2);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b2);
    std::cout << *me;
    me->attack(b2);
    std::cout << *me;
    
    delete(pf);
    delete(pr);
    delete(b);
    delete(me);
    return (0);
}