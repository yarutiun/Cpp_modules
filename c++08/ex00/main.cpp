#include "easyfind.hpp"

int main(void)
{
    std::vector<int> int_vec;
	int_vec.push_back(1);
	int_vec.push_back(20);
	int_vec.push_back(3);
	int_vec.push_back(20);
    ::easyfind(int_vec, 20);
    std::array<int, 4> int_arr = {6, 7, 8, 9};
    ::easyfind(int_arr, 9);
    ::easyfind(int_arr, 666);
    return(0);
}