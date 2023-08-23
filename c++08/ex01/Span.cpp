#include "Span.hpp"

Span::Span(): _n(0)
{

}

Span::Span(unsigned int n): _n(n)
{

}

void Span::addNumber(int num)
{
    if(_vec.size() >= _n)
        throw toManyNums();
    _vec.push_back(num);
}

int Span::longestSpan()
{
    if(_vec.size() <= 1)
        throw notEnoughNums();
    return((*max_element(_vec.begin(), _vec.end())) - (*min_element(_vec.begin(), _vec.end()))); 
}

int Span::shortestSpan()
{
    if(_vec.size() <= 1)
        throw notEnoughNums();
        return(0); //needs implementation
}

Span::~Span()
{
    
}

Span::Span(const Span &s)
{
    *this = s;
}

const Span &Span::operator=(const Span &s)
{
    this->_n = s._n;
    this->_vec = s._vec;
    return(*this);
}

const char *Span::toManyNums::what() const throw()
{
    return("To many numbers bro");
}

const char *Span::notEnoughNums::what() const throw()
{
    return("Not enough numbers in a container");
}