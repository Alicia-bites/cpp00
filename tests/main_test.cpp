#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream

int main()
{
	std::string s1 = "pink";
	std::string s2 = "floyd";
	std::string space = "      ";
	int	n = 0;

	int index = 5;
	std::stringstream ss;
	ss << index;
	std::string str = ss.str();
	str = space + str;
	std::cout << "str = "<< str << std::endl;

	while (index > 0)
	{
		index /= 10;
		n++;
	}

	std::cout << "n = "<< n << std::endl;	
	space += space;

	std::cout << s1 + space + s2 << std::endl;
	return 0;
}