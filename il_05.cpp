#include <initializer_list>
#include <iostream>

int foo(int);
double foo(double);

int main()
{
	auto x1 = { 1, 2, 3, 4 }; ////std::initializer_list<int> x1 = { 1, 2, 3, 4 };
	auto x2 = { 1 }; //std::initializer_list<int> x2 = {1};
	//auto x3 = {}; //invalid
	//auto x4{}; //invalid 
	//auto x5{ 1, 2, 3, 4 }; //invalid
	auto x6{ 1 };  //int x6{1}
	//auto x7{2, 3.4} //invalid
	auto x8 = { foo(1) }; //std::initializer_list<int> x8 = foo(1);
}
