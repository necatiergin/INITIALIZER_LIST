#include <iostream>
#include <initializer_list>

int main()
{
	std::initializer_list x{ 1, 2, 3, 4, 5 }; //CTAD

	std::cout << "*x.begin() = " << *x.begin() << '\n';
	*x.begin() = 455; //invalid - begin() returns const int*
}
