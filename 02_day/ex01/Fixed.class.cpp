#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
    this->value = 0;
    std::cout << "Constructor started\n";
    return ;
};

Fixed::Fixed(const int x)
{
    this->value = (x << Fixed::fractValue);
    std::cout << "Constructor started\n";
    return ;
};

Fixed::Fixed(const float x)
{
    this->value = std::roundf(x * (1 << Fixed::fractValue));
    std::cout << "Constructor started\n";
    return ;
};

Fixed::~Fixed(void)
{
    std::cout << "Destructor doing a hard but honest work\n";
    return ;
};

Fixed::Fixed(const Fixed &cpy)
{
    this->value = cpy.value;
    std::cout << "A copy of the object has been created\n";
    return ;
};

Fixed &Fixed::operator = (const Fixed &other)
{
    std::cout << "Asignation is done" << std::endl;
    this->value = other.value;
    return (*this);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

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

int     Fixed::toInt(void) const
{

    //return (this->value / pow(2, Fixed::fractValue));
    return (this->value >> Fixed::fractValue);
}

float   Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << Fixed::fractValue));
}