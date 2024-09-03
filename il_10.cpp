#include <iostream>
#include <string>

int main()
{
	std::string sx(50, 'A');

	std::cout << "sx = " << sx << '\n';
	std::cout << "sx.length() = " << sx.length() << '\n';

	std::string sy{ 50, 'A' };
	std::cout << "sy = " << sy << '\n';
	std::cout << "sy.length() = " << sy.length() << '\n';
}
