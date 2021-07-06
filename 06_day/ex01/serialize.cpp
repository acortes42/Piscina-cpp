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
    Data *data = new Data;
    std::string chars = "abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ";
    
    srand (random_rand());
    for (int i = 0; i < 8 ; i++)
        data->s1 += chars[static_cast<int>(std::rand() % 47)];
    data->x = static_cast<int>(std::rand() % 8000);
    for (int i = 0; i < 8 ; i++)
        data->s2 += chars[std::rand() % 47];
    return (data);
}

Data *      deserialize(void * str)
{
	Data *ret = new Data;

	ret->s1 = std::string(reinterpret_cast<char *> (str) + 16, 8);
	ret->x = *(reinterpret_cast<int *>(str) + 8);
	ret->s2 = std::string(reinterpret_cast<char *>(str) + 56, 8);
	return (ret);
}
