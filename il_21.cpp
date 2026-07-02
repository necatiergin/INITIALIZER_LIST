#include <initializer_list>
#include <iostream>

class Nec {
public:
    Nec(std::initializer_list<int> il) : m_il(il) {}

    void print() const
    {
        for (auto x : m_il)
            std::cout << x << '\n';
    }

private:
    std::initializer_list<int> m_il;
};

int main()
{
    Nec nec{ 1, 2, 3 };
    nec.print(); // UB
}
