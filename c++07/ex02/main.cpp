#include "iter.hpp"

int main(void)
{
	int array_ints[] = {1, 2, 3, 4};
	::iter<int>(array_ints, 4, ::print);

	std::string string = "Im iterating lol";
	iter<const char>(string.c_str(), string.length(), ::print);
}
