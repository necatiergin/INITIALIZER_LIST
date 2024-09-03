#include <initializer_list>
#include <iterator>
#include <iostream>
#include <algorithm>

int main()
{
	std::initializer_list ilist{ 1, 2, 3, 4, 5 }; //CTAD

	std::for_each(ilist.begin(), ilist.end(), [](int x) {std::cout << x; });
	//std::for_each(ilist.rbegin(), ilist.rend(), [](int x) {std::cout << x; });
	// error - no member fucntion rbegin / rend
	std::cout << '\n';
	std::for_each(std::rbegin(ilist), std::rend(ilist), [](int x) {std::cout << x; });
}
