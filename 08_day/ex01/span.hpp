#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdlib.h>


class Span
{
    public:

        Span(int x);
        Span(const Span &cpy);
        virtual ~Span();
    
        Span &operator = (const Span &cpy);
        void addNumber(int x);
        void addNumber(int x, int y);
        int  shortestSpan();
        int  longestSpan();
        class outOfLimits : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

    private:
        Span();
        std::vector <int> vect;
        int  empty_space;
};

std::ostream &operator<<(std::ostream &os, Span const &arg);

#endif