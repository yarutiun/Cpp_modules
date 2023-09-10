#include " BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    BitcoinExchange btc(argv[1]);
    
    if(argc == 2)
    {
        btc.readFromBase(btc._bitcoin);
        btc.readFromInput(btc._ownInput);
        btc.change();
        // if (!btc.commonKeys.empty()) {
        std::cout << "Common keys between the two maps:" << std::endl;
        for (std::vector<std::string>::const_iterator it = btc.commonKeys.begin(); it != btc.commonKeys.end(); ++it)
        {
            std::cout << *it << std::endl;
        }
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