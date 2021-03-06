#include <iostream>
#include "Fraction.hpp"


int main()
{
	Fraction a(2, 3);
	Fraction b = a + Fraction(1, 4);
	b -= 2;
	std::cout << "Fraction A: " << a << "\nFraction B: " << b;

	Fraction c;
	if (!c)
		std::cout << "\nFraction C: " << c;

	Fraction d(2, 5);
	if (d == a)
		std::cout << "\nFraction " << d << " equals Fraction " << a;
	else if (d != a)
		std::cout << "\nFraction " << d << " does not equal Fraction " << a;

	//just to make sure the program doesn't immediately quit after executing
	int waitToExit;
	std::cin >> waitToExit;

	return 0;
}