/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 13:16:14 by acortes-          #+#    #+#             */
/*   Updated: 2021/05/27 14:08:28 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
    this->value = 0;
    std::cout << "Constructor started to work\n";
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
