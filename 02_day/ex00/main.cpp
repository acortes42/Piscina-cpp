#include "Fixed.class.hpp"

int main( void ) 
{
    Fixed a;
    Fixed b( a );
    Fixed c;

    b.setRawBits(500);
    c = b;

    a.setRawBits(100);
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return (0);
}