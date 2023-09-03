#pragma once

#include <iostream>
#include <map>
#include <iterator>

class  BitcoinExchange{
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &bx);
        const BitcoinExchange& operator=(const BitcoinExchange &bx);
        std::map<std::string, int> _bitcoin;
        std::map<std::string, int>::iterator _iter;
    private:
};