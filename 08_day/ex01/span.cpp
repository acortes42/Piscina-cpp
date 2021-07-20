#include "span.hpp"

Span::Span(){};

Span::Span(int x)
{
    if (x >= 0)
        this->empty_space = x;
    else
        throw (Span::outOfLimits());
}

Span::Span(const Span &cpy)
{
    *this = cpy;
}

Span::~Span(){};


Span &Span::operator = (const Span &cpy)
{
    this->empty_space = cpy.empty_space;
    this->vect = cpy.vect;
    return (*this);
}

void Span::addNumber(int x)
{
    if (this->empty_space > 0)
        this->vect.push_back(x);
    else
        throw (Span::outOfLimits());
    this->empty_space--;
}

void Span::addNumber(int x, int y)
{
    while (x < y)
    {
        if (this->empty_space > 0)
        {
            this->vect.push_back(x);
            this->empty_space--;
            x++;
        }
        else
            throw (Span::outOfLimits());
    }
}

int  Span::shortestSpan()
{
    int x;
    int aux;
    int aux2;

    aux = 0;
    aux2 = 0;
    if (this->vect.size() <= 1)
        return (0);
    x = this->vect[0];
    for (int i = 0; i < this->vect.size(); i++)
    {
        if (i == 0)
        {
            aux = this->vect[i];
            i++;
        }
        aux2 = this->vect[i];
        if (abs(aux - aux2) < x)
            x = abs(aux - aux2);
        aux = aux2;
    }
    return (x);
}

int  Span::longestSpan()
{
    int x;
    int aux;
    int aux2;

    aux = 0;
    aux2 = 0;
    if (this->vect.size() <= 1)
        return (0);
    x = 0;
    for (int i = 0; i < this->vect.size(); i++)
    {
        if (i == 0)
        {
            aux = this->vect[i];
            i++;
        }
        aux2 = this->vect[i];
        if (abs(aux - aux2) > x)
            x = abs(aux - aux2);
        aux = aux2;
    }
    return (x);
}

const char* Span::outOfLimits::what() const throw()
{
	return "Error";
}

std::ostream &operator<<(std::ostream &os, Span const &arg)
{
    os << std::endl;
    return (os);
}