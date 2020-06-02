#include <iostream>

int main() {
	int a, b, c;
	std::cout << "Input days count: ";
	std::cin >> c;

	a = c / 365;
	b = (c % 365) / 30;
	c = (c % 365) % 30;
	std::cout << "Years: " << a << " Month: " << b << " Days: " << c << std::endl;
	return 0;
}