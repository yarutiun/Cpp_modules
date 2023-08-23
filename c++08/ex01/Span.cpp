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

void Span::addManyNums(int flag) // if flag is 0 - assign random numbers, if flag is 1 - assign number from 0 to _n
{
    if(flag != 1 && flag != 0)
    {
        std::cout << "flag 0 - assign random numbers, flag 1 - assign number from 0 to _n" << std::endl;
        return;
    }
    srand(time(NULL));
    if(flag == 0)
    {
        for(int i = 0; i < _n; i++)
            _vec.push_back(rand());
    }
    if(flag == 1)
    {
        for(int i = 0; i < _n; i++)
            _vec.push_back(i);
    }
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