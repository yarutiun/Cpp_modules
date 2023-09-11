#include " BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    
    if(argc == 2)
    {
        BitcoinExchange btc(argv[1]);
        btc.readFromBase(btc._bitcoin);
        btc._iter = btc._ownInput.begin();
        // std::cout << btc._iter->first << btc._iter->second << std::endl;
        // for(btc._iter = btc._ownInput.begin(); btc._iter != btc._bitcoin.end(); btc._iter++)
        // {
        //     std::cout << btc._iter->first << btc._iter->second << std::endl;
        // }
        btc.readFromInput(btc._ownInput);
        btc.change();
        // std::cout << "Common keys between the two maps:" << std::endl;
        return(0);
    }
    std::cout << "input should have 2 parameters" << std::endl;
    return (0);
}

// btc._bitcoin.insert(std::pair<std::string, int>("hello", 1));

// for (const auto& pair : btc._bitcoin)
// {
// std::cout << "Date: " << pair.first << ", Value: " << pair.second << std::endl;
// }

// std::cout << btc._iter->first << " first elem " << btc._iter->second << " second elem " << std::endl;