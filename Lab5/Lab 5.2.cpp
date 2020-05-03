#include <iostream>

int main() {
	int size = 10;
	double arr[10];

	for (int a = size - 1; a >= 0; --a) {
		std::cout << "Enter " << size - a << " array num" << std::endl;
		std::cin >> arr[a];
	}

	std::cout << "Reverse order of elements: " << std::endl;
	for (double elem : arr)
		std::cout << elem << std::endl;

	return 0;
}