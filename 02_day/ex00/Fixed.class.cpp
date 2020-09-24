#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
    this->value = 0;
    std::cout << "Constructor started to work\n";
    return ;
};

Fixed::~Fixed(void)
{
    std::cout << "Destructor doing a hard but honest work\n";
    return ;
};

// falla la copia

Fixed::Fixed   (const Fixed &cpy)
{
    this->value = cpy.value;
    std::cout << "A copy of the object has been created\n";
    return ;
};

Fixed Fixed::operator = (const Fixed &arg)
{
    Fixed tmp;
    
    tmp.value = arg.value;
    std::cout << "Asignation is done" << std::endl;
    return (tmp);
};

int       Fixed::getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
};

void    Fixed::setRawBits(int const bits)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = bits;
    return ;
};
