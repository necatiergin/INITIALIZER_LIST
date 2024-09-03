#include <initializer_list>
#include <iostream>

void foo(std::initializer_list<int>)
{
	std::cout << "initializer_list<int>\n";
}

void foo(std::initializer_list<double>)
{
	std::cout << "initializer_list<double>\n";
}

int main()
{
	foo({ 1, 3, 5 });
	foo({ 1.1, 3.3, 5.5 });
	//foo({ 1.1, 2, 3.3}); //error
}
