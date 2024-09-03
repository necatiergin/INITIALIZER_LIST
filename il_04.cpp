#include <iostream>
#include <initializer_list>

int main()
{
	std::initializer_list<int> x{ 1, 2, 3, 4 };
	std::initializer_list y{ 1, 2, 3, 4 }; //CTAD
	auto z = { 1, 2, 3, 4 };  // z is std::initializer_list<int>
	auto t{ 1 };  //t is int
	auto m{ 1, 2, 3 };  //invalid
}
