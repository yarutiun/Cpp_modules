#include " BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    BitcoinExchange btc;
    btc._bitcoin.insert(std::pair<std::string, int>("hello", 1.2));
    btc._iter = btc._bitcoin.begin();
    std::cout << btc._iter->first << " first elem " << btc._iter->second << " second elem " << std::endl;
    if(argc == 2)
    {

        return(0);
    }
    else
    {
        std::cout << "input should have 2 parameters" << std::endl;
        return (0);
    }
}