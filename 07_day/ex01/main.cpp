# include "iter.hpp"

template <typename T> 
void iter(T *address, int length, void (*function)(T const &x))
{
    for (int i = 0; i < length; i++)
        (*function)(address[i]);
}

template<typename T>
void do_something(T const &arg)
{
     std::cout << "Wololo " << arg << "." << std::endl;
}

int main()
{
    int x = 3;
    int arr[x] = { 1, 2, 3};

    iter(arr, x, &do_something);
    return (0);
}