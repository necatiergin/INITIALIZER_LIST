#include <initializer_list>

template <typename T>
void foo(T x);

template <typename T>
void bar(std::initializer_list<T>);

void func()
{
	//foo({ 1, 3, 5, 7 }); //invalid
	bar({ 1, 3, 5, 7 }); //valid
}
