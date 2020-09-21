#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(void)
{
    return ;
}

std::string ZombieHorde::randomChump()
{
    int         n1;
    int         n2;
    int         n3;
    std::string vocals;
    std::string consonants;
    std::string ret;

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
    return (ret);
};

ZombieHorde::ZombieHorde(int n)
{   
    int     x;

    x = 0;
    this->z = new Zombie[n];
    while (x < n)
    {
        z[x].name = randomChump();
        z[x].type = "horde";
        z[x].announce();
        x++;
    }
}
