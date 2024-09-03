#include <iostream>
#include <initializer_list>

int main()
{
	std::initializer_list x{ 1, 2, 3, 4, 5 }; //CTAD
	auto y = x;

	std::cout << "x.begin() = " << x.begin() << '\n';
	std::cout << "y.begin() = " << y.begin() << '\n';
	std::cout << "x.end() = " << x.end() << '\n';
	std::cout << "y.end() = " << y.end() << '\n';
}
