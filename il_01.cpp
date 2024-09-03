#include <iostream>
#include <initializer_list>

int main()
{
	std::cout << "sizeof(int*) = " << sizeof(int*) << '\n';
	std::cout << "sizeof(std::initializer_list<int>) = " << sizeof(std::initializer_list<int>) << '\n';
}
