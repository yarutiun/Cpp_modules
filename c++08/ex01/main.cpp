#include "Span.hpp"

int main(void)
{
    Span s(667);
    s.addManyNums(1);
    try
    {
    s.addNumber(1);
    s.addNumber(2);
    s.addNumber(3);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << s.longestSpan() << std::endl;
    return(0);
}