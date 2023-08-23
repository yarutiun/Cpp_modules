#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

class Span{
    private:
        unsigned int _n;
        std::vector<int> _vec;
    public:
        Span();
        Span(unsigned int n);
        ~Span();
        Span(const Span &s);
        const Span &operator=(const Span &s);
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();

        class toManyNums: public std::exception{
            public:
                virtual const char *what() const throw();
        };

        class notEnoughNums: public std::exception{
            public:
                virtual const char *what() const throw();
        };
};

#endif