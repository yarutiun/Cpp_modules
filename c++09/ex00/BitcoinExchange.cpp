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
            // bitc.insert(std::pair<std::string, double>(line.substr(0, 10), std::stod(line.substr(12, (line.length() - 11)))));
        // std::cout << line << std::endl;
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

// void BitcoinExchange::readFromInput(std::map<std::string, double> &input)
// {
//     std::ifstream inputFile("input.txt");
//     if (!inputFile.is_open())
//     {
//         std::cerr << "Failed to open the Input file." << std::endl;
//         exit(EXIT_FAILURE);
//     }
//     std::string line;
//     std::getline(inputFile, line);
//     while (std::getline(inputFile, line))
//     {
//         // bitc.insert(std::pair<std::string, double>(line.substr(0, 10), std::stod(line.substr(12, (line.length() - 11)))));
//         // std::cout << line << std::endl;
//         size_t pos = line.find("|");
//         if (pos != std::string::npos)
//         {
//             std::string date = line.substr(0, pos);
//             double value = std::stod(line.substr(pos + 2));
//             input[date] = value;
//         }
//     }
//     inputFile.close();
// }

// int BitcoinExchange::wrongDate(std::string date)
// {
//     int toComp;
//     if(date.length() != 10)
//         return(1);
//     toComp = date.substr(0, 2);
//     else if(toComp > 30 || toComp < 0)
//         return(1);
// }