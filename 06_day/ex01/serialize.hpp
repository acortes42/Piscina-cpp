#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include <iostream>
# include <string>
# include <random>
# include <sys/time.h>

struct Data
{
    std::string s1;
    int         x;
    std::string s2;
};

Data *deserialize(void *raw);
void *serialize(void);
int random_rand(void);

#endif