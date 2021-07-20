#include "span.hpp"

int main()
{
    Span sp = Span(5);

  /*  sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(-100); */

    sp.addNumber(3, 5);    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return (0);
}