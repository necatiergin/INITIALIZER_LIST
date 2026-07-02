#include <initializer_list>
#include <iostream>

const int* gp{};

void func(std::initializer_list<int> il)
{
    gp = il.begin();
}

int main()
{
    func({ 1, 2, 3 });
    std::cout << *gp; // UB
}

