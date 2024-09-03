#include <initializer_list>
#include <iostream>

class Nec {
public:
	Nec()
	{
		std::cout << "default ctor\n";
	}

	Nec(const Nec&) = delete;

	Nec(Nec&&)noexcept
	{
		std::cout << "move ctor\n";
	}
};

int main()
{
	Nec x, y, z;  //default ctor
	auto x_list = { x, y, z }; //invalid (no copy ctor)
}
