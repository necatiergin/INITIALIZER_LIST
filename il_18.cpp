#include <iostream>
#include <initializer_list>

int main()
{
	using namespace std;

	initializer_list<initializer_list<int>> lists = { {1}, {2, 2}, {3, 3, 3}, {4, 4, 4, 4} };

	for (auto ilist : lists) {
		for (auto i : ilist)
			cout << i << ' ';
		cout << '\n';
	}
}
