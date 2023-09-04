#include " BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    BitcoinExchange btc;
    
    if(argc == 2)
    {
        btc.readFromBase(btc._bitcoin);
        btc._iter = btc._bitcoin.begin();
        while(btc._iter != btc._bitcoin.end())
        {
            std::cout << btc._iter->first << " first elem " << btc._iter->second << " second elem " << std::endl;
            btc._iter++;
        }
        btc._iter = btc._bitcoin.begin();
        std::cout << btc._iter->first << " first elem " << btc._iter->second << " second elem " << std::endl;
        return(0);
    }
    else
    {
        std::cout << "input should have 2 parameters" << std::endl;
        return (0);
    }
}

// btc._bitcoin.insert(std::pair<std::string, int>("hello", 1));

// for (const auto& pair : btc._bitcoin)
// {
// std::cout << "Date: " << pair.first << ", Value: " << pair.second << std::endl;
// }

// std::cout << btc._iter->first << " first elem " << btc._iter->second << " second elem " << std::endl;