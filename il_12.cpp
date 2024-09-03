#include <iostream>
#include <initializer_list>

class Nec {
public:
	Nec(int, int)
	{
		std::cout << "Nec(int, int)\n";
	}

	Nec(std::initializer_list<int>)
	{
		std::cout << "Nec(std::initializer_list<int>)\n";
	}
};


int main()
{
	Nec x(10, 20);
	Nec y{ 10, 20 };
}
