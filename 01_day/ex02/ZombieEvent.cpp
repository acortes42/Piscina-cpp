#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(Zombie   *z, std::string str)
{
    z->type = str;
}

Zombie      *ZombieEvent::newZombie(std::string name)
{
    Zombie  *zNew;

    zNew = new Zombie(name, "Slow walker");
    setZombieType(zNew, "Slow walker");

    return (zNew);
}

Zombie      *ZombieEvent::randomChump()
{
    int         n1;
    int         n2;
    int         n3;
    std::string vocals;
    std::string consonants;
    std::string ret;
    Zombie      *z;

    vocals = "aeiou";
    consonants = "qwrtypsdfghjklzxcvbnm";
    ret = "";
    srand (randomAlgo());
    n3 = std::rand() % 4 + 3;
    while (n3 > 0)
    {
        n1 = std::rand() % vocals.length();
        n2 = std::rand() % consonants.length();
        if (n3 % 2 == 0)
            ret += vocals[n1];
        else
            ret += consonants[n2];
        n3--;
    }
    ret[0] = toupper(ret[0]);
    z = newZombie(ret);
    return (z);
};