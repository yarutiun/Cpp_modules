#include " BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(): _fileName(nullptr){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const std::string _file): _fileName(_file) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &bx): _fileName(nullptr)
{
    *this = bx;
}

const BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &bx)
{
    return(*this);
}

const std::string BitcoinExchange::getFileName(void) const
{
    return(_fileName);
}

void BitcoinExchange::readFromBase(std::map<std::string, double> &bitc)
{
    std::ifstream baseFile("data.csv");
    if (!baseFile.is_open())
    {
        std::cerr << "Failed to open the Database file." << std::endl;
        exit(EXIT_FAILURE);
    }
    std::string line;
    std::getline(baseFile, line);
    while (std::getline(baseFile, line))
    {
        size_t pos = line.find(",");
        if (pos != std::string::npos)
        {
            std::string date = line.substr(0, pos);
            double value = std::stod(line.substr(pos + 1));
            bitc[date] = value;
        }
    }
    baseFile.close();
}

void BitcoinExchange::readFromInput(std::map<std::string, double> &input)
{
    
    std::ifstream inputFile(_fileName);
    if (!inputFile.is_open())
    {
        std::cerr << "Failed to open the Input file." << std::endl;
        exit(EXIT_FAILURE);
    }
    std::string line;
    std::getline(inputFile, line);
    while (std::getline(inputFile, line))
    {
        validateInput();
        input.insert(std::pair<std::string, double>(line.substr(0, 10), std::stod(line.substr(12, (line.length() - 11)))));
    }
    inputFile.close();
}

void BitcoinExchange::validateInput(void)
{
    std::ifstream inputFile(_fileName);
    std::string line;
    std::getline(inputFile, line);
    while (std::getline(inputFile, line))
    {
        if(line.find('|') == std::string::npos)
        {
                std::cout << "WRONG FORMAT" << std::endl;
                exit(EXIT_FAILURE);
        }
        if(std::stod(line.substr(12, (line.length() - 11))) > 1000)
        {
                std::cout << "NUMBER TOO BIG" << std::endl;
                exit(EXIT_FAILURE);
        }
        if(std::stod(line.substr(12, (line.length() - 11))) < 0)
        {
                std::cout << "NUMBER TOO SMALL" << std::endl;
                exit(EXIT_FAILURE);
        }
        if(std::stoi(line.substr(5, 6)) > 12 || std::stoi(line.substr(5, 6)) < 1)
        {
                std::cout << "NOT VALID MONTH" << std::endl;
                exit(EXIT_FAILURE);
        }
        if(std::stoi(line.substr(8, 9)) > 31 || std::stoi(line.substr(8, 9)) < 1)
        {
                std::cout << "NOT VALID DAY" << std::endl;
                exit(EXIT_FAILURE);
        }
        if(line[4] != '-' || line[7] != '-')
        {
            std::cout << "WRONG DATE FORMAT" << std::endl;
            exit(EXIT_FAILURE);
        }
    }
    inputFile.close();
}

void BitcoinExchange::change(void)
{
    double val1, val2;
    for (_iter = _ownInput.begin(); _iter != _ownInput.end(); ++_iter)
    {
        if (_bitcoin.find(_iter->first) != _bitcoin.end()) {
            commonKeys.push_back(_iter->first);
            val1 = _bitcoin[_iter->first];
            val2 = _ownInput[_iter->first];
            std::cout << _iter->first << " => " << val2 << " = " << val1 * val2 << std::endl;
        }
    } //duplicates don't work
}