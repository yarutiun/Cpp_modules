#include "Span.hpp"

int main(void)
{
    Span s(5);
    // s.addManyNums(1);
    s.addNumber(9);
    s.addNumber(11);
    s.addNumber(17);
    s.addNumber(6);
    s.addNumber(3);
    std::cout << s.shortestSpan() << std::endl;
    std::cout << s.longestSpan() << std::endl;
    return(0);
}