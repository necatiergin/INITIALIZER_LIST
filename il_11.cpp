#include <iostream>
#include <vector>

int main()
{
	std::vector<int> x(20);
	std::cout << "x.size() = " << x.size() << '\n';
	std::vector<int> y{ 20 };
	std::cout << "y.size() = " << y.size() << '\n';
	std::vector<int> z(20, 5);
	std::cout << "z.size() = " << z.size() << '\n';
	std::vector<int> t{ 20, 5 };
	std::cout << "t.size() = " << t.size() << '\n';
}
