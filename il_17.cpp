#include <iostream>
#include <initializer_list>

std::initializer_list<int> func()
{
	return { 1, 3, 5, 7, 9, 11 };
}


int main()
{
	auto ilist = func();   //ub
	// ...
}
