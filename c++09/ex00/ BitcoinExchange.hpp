#pragma once

#include <iostream>
#include <map>
#include <iterator>
#include <fstream>
#include <string>

class  BitcoinExchange{
    public:
        BitcoinExchange();
        BitcoinExchange(const std::string _file);
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &bx);
        const BitcoinExchange& operator=(const BitcoinExchange &bx);
        std::map<std::string, double> _bitcoin;
        std::map<std::string, double> _ownInput;
        std::map<std::string, double>::iterator _iter;
        void readFromBase(std::map<std::string, double> &_bitcoin);
        const std::string getFileName(void) const;
        void readFromInput(std::map<std::string, double> &input);
        void validateInput(void);
        void change(void);
        std::vector<std::string> commonKeys;
    private:
        const std::string _fileName;
};