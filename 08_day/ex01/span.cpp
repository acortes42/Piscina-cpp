#include "span.hpp"

Span::Span(int x)
{
    this->empty_space = x;
    this->vect = vector<int>tmp[x];
}

Span::Span(const Span &cpy)
{
    *this = cpy;
}


Span &Span::operator = (const Span &cpy)
{
    this->empty_space = cpy.empty_space;
    this->vect = cpy.vect;
    return (this)
}