#include " BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &bx)
{
    *this = bx;
}

const BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &bx)
{
    return(*this);
}

// std::map<std::string, int> BitcoinExchange::getMap(void)
// {
//     return(_bitcoin);
// }

// void BitcoinExchange::setMap(std::string date, int price)
// {
//     _bitcoin.insert(std::pair<std::string, int>(date, price));
// }

// std::map<std::string, int>::iterator getIter(void)
// {
//     return(_iter);
// }