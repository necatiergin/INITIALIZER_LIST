#include <initializer_list>
#include <iostream>

class Nec {
public:
	Nec()
	{
		std::cout << "default ctor\n";
	}

	Nec(const Nec&)
	{
		std::cout << "copy ctor\n";
	}

	Nec(Nec&&)
	{
		std::cout << "move ctor\n";
	}
};

int main()
{
	Nec x, y, z;  //default ctor
	auto x_list = { x, y, z }; //copy ctor
	auto y_list = { std::move(x), std::move(y), std::move(z) }; //move ctor
}
