# ifndef ITER
# define ITER

# include <iostream>
# include <string>

template <typename T> 
void iter(T *address, int length, void (*function)(T const &x));

template<typename T>
void do_something(T const &i);

#endif