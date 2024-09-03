#include <initializer_list>
#include <iterator>
#include <iostream>

int main()
{
	std::initializer_list<double> dlist;

	std::cout << "size = " << dlist.size() << '\n';
	std::cout << "size = " << size(dlist) << '\n';
	std::cout << (dlist.begin() == nullptr) << (dlist.end() == nullptr) << '\n'; //11
}
