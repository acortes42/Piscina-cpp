#include "whatever.hpp"

template <typename T> 
T max(T n1, T n2)
{
    if (n1 > n2)
        return (n1);
    return (n2);
}

template <typename T> 
T min(T n1, T n2)
{
    if (n1 < n2)
        return (n1);
    return (n2); 
}

template <typename T> 
void swap(T &n1, T& n2)
{
    T tmp;

    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main( void ) 
{
    int a = 2;
    int b = 3;

    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    return(0);
}