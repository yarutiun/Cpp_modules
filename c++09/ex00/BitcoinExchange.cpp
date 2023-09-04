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

void BitcoinExchange::readFromBase(std::map<std::string, double> &bitc)
{
    int i = 0;
    int flag = 0;
    std::ifstream baseFile("data.csv");
    if (!baseFile.is_open())
    {
        std::cerr << "Failed to open the file." << std::endl;
        return ;
    }
    std::string line;
    std::getline(baseFile, line);
    while (std::getline(baseFile, line))
    {
            // bitc.insert(std::pair<std::string, double>(line.substr(0, 10), std::stod(line.substr(12, (line.length() - 11)))));
        // std::cout << line << std::endl;
        size_t pos = line.find(",");
        if (pos != std::string::npos) {
            std::string date = line.substr(0, pos);
            double value = std::stod(line.substr(pos + 1));

            // Insert the date-value pair into the map.
            bitc[date] = value;
    }
    }
    baseFile.close();
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