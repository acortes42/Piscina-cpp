#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
    this->value = 0;
    return ;
};

Fixed::Fixed(const int x)
{
    this->value = (x << Fixed::fractValue);
    return ;
};

Fixed::Fixed(const float x)
{
    this->value = std::roundf(x * (1 << Fixed::fractValue));
    return ;
};

Fixed::~Fixed(void)
{
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

Fixed Fixed::operator + (const Fixed &other)
{
    Fixed tmp(*this);
    
    tmp.value = this->getRawBits() + other.getRawBits();
    return (tmp);
}

Fixed Fixed::operator - (const Fixed &other)
{
    Fixed tmp(*this);
    
    tmp.value = this->getRawBits() - other.getRawBits();
    return (tmp);
}

Fixed Fixed::operator * (const Fixed &other)
{
    Fixed tmp(*this);
	long n1, n2;

	n1 = ((long)this->getRawBits());
	n2 = ((long)other.getRawBits());
	tmp.setRawBits((n1 * n2) / (1 << Fixed::fractValue));
	return (tmp);
}

Fixed Fixed::operator / (const Fixed &other)
{
    Fixed tmp(*this);
	long n1, n2;

	n1 = ((long)this->getRawBits());
	n2 = ((long)other.getRawBits());
	tmp.setRawBits((n1 * (1 << Fixed::fractValue)) / n1);
	return (tmp);
}

Fixed Fixed::operator < (const Fixed &other)
{
    return (this->getRawBits() < other.getRawBits());
}

Fixed Fixed::operator > (const Fixed &other)
{
    return (this->getRawBits() > other.getRawBits());
}

Fixed Fixed::operator <= (const Fixed &other)
{
    return (this->getRawBits() <= other.getRawBits());
}

Fixed Fixed::operator >= (const Fixed &other)
{
    return (this->getRawBits() >= other.getRawBits());
}

Fixed Fixed::operator == (const Fixed &other)
{
    return (this->getRawBits() == other.getRawBits());
}

Fixed Fixed::operator != (const Fixed &other)
{
    return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator -- (int)
{
    Fixed tmp(*this);

    operator--();
    return (tmp);
};

Fixed Fixed::operator ++ (int)
{
    Fixed tmp(*this);

    operator++();
    return (tmp);
};

Fixed Fixed::operator--()
{
    this->value--;
	return (*this);
}

Fixed Fixed::operator++()
{
    this->value++;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

int       Fixed::getRawBits() const
{
    return (this->value);
};

void    Fixed::setRawBits(int const bits)
{
    this->value = bits;
    return ;
};

int     Fixed::toInt(void) const
{
    return (this->value);
}

float   Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << Fixed::fractValue));
}

Fixed const  &Fixed::min(Fixed const &f1, Fixed const &f2)
{
    return (f1.getRawBits() <= f2.getRawBits()? f1 : f2);
}

Fixed const  &Fixed::max(Fixed const &f1, Fixed const &f2)
{
    return (f1.getRawBits() >= f2.getRawBits()? f1 : f2);
}

Fixed  &Fixed::min(Fixed &f1, Fixed &f2)
{
    return (f1.getRawBits() <= f2.getRawBits()? f1 : f2);
}

Fixed  &Fixed::max(Fixed &f1, Fixed &f2)
{
    return (f1.getRawBits() >= f2.getRawBits()? f1 : f2);
}