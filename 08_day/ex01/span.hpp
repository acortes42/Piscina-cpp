#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    public:

        Span(int x);
        Span(const Span &cpy);
        ~Span()
    
        Span &operator = (const Span &cpy);
        void addNumber(int x);
        void addNumber(int x, int y);
        int  shortestSpan();
        int  longestSpan();

    private:
        Span();
        vector <int>    vect;
        int             empty_space;
}

#endif