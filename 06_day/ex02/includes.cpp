#include "includes.hpp"

int random_rand(void)
{
    struct timeval  tv1;
    gettimeofday(&tv1, NULL);
    return(tv1.tv_usec);
}

Base *generate(void)
{
    int     x;
    Base    *base;

    srand (random_rand());
    x = static_cast<int>(std::rand() % 3);
    if (x == 0)
        return (new A);
    else if (x == 1)
        return (new B);
    else
        return (new C);
    return (NULL);

}

void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;
}