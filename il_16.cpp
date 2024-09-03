#include <initializer_list>
#include <iostream>

int main()
{
	std::initializer_list dlist = { 1.1, 2.2, 3.2, 4.4, 5.5 }; //CTAD
	const double *pbeg = dlist.begin();
	const double* pend = dlist.end();

	while (pbeg != pend) {
		std::cout << *pbeg++ << ' ';
	}
}
