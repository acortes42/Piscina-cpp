#include "serialize.hpp"

int random_rand(void)
{
    struct timeval  tv1;
    gettimeofday(&tv1, NULL);
    return(tv1.tv_usec);
}

void *serialize(void)
{
    int         x;
    char        *str = new char[20];
    std::string chars = "abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ";
    
    srand (random_rand());
    for (int i = 0; i < 8 ; i++)
    {
        int tmp = static_cast<int>(std::rand() % 47);
        str[i] = chars[tmp];
    }
    *reinterpret_cast<int*>(str + 10) = rand() % 1000000;
    for (int i = 0; i < 8 ; i++)
        str[i + 12] = chars[std::rand() % 47];
    return (str);
}

Data *      deserialize(void * str)
{
	Data *ret = new Data;

	ret->s1 = std::string(reinterpret_cast<char *>(str), 8);
	ret->x = *(reinterpret_cast<int *>(str) + sizeof(int));
	ret->s2 = std::string(reinterpret_cast<char *>(str) + (sizeof(char*) + sizeof(int)), 8);
	return (ret);
}
