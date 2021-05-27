/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:04:53 by acortes-          #+#    #+#             */
/*   Updated: 2021/05/27 14:07:40 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::cout << "Destructor called\n";
    return ;
};

Fixed::Fixed   (const Fixed &other)
{
    this->value = other.getRawBits();
    std::cout << "A copy of the object has been created\n";
    return ;
};

Fixed &Fixed::operator = (const Fixed &other)
{   
    std::cout << "Asignation is done" << std::endl;
    if (this == &other)
        return (*this);
    this->value = other.getRawBits();
    return (*this);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

int       Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
};

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
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