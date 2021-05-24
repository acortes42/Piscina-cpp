#include "Zombie.hpp"

int randomAlgo()
{
    struct timeval  tv1;
    gettimeofday(&tv1, NULL);
    return(tv1.tv_usec);
}

Zombie::Zombie(std::string name, std::string type)
{   
    this->type = type;
    this->name = name;
}

void Zombie::announce()
{
    int x;

    srand (randomAlgo());
    x = std::rand() % 5;
    if (x == 0)
        std::cout << "You listen noises in the area\n";
    else if (x == 1)
        std::cout << "You see a undead few meters in front of you\n";
    else if (x == 2)
        std::cout << "¡A zombi surprise you from your back!\n";
    else if (x == 3)
        std::cout << "The smell of the dead is stronger in this zone, seems that your not alone\n";
    else if (x == 4)
        std::cout << "A bloody mass of bones and flesh appear near to you\n";
    std::cout << this->name << " the " << this->type <<" detect your presence\n\n";
}