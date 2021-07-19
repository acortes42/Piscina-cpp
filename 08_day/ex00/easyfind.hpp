# ifndef EASYFIND
# define EASYFIND

#include <iostream>
#include <vector>
# include <exception>
# include <cctype>
# include <map>
#include <list>


template<typename T>
typename T::iterator easyfind(T &ints, int n)
{
    for (typename T::iterator i = ints.begin(); i != ints.end(); i++)
        if (*i == n)
            return (i);
	return (ints.end());
}

template<typename key, typename value>
typename std::map<key, value>::iterator easyfind(std::map<key, value> &ints, int n)
{   
    typename std::map<key, value>::iterator i = ints.begin();
    while (i != ints.end())
    {
        if (i->second == n)
            return (i);
        i++;
    }
	return (ints.end());
}

#endif