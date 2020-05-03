#include <iostream>

int main() {
	double arr[10];
	double sum = 0, average;

	for (int a = 0; a < 10; ++a) {
		std::cout << "Enter " << a + 1 << " num" << std::endl;
		std::cin >> arr[a];
		sum += arr[a];
	}

	average = sum / 10;
	std::cout
		<< "Sum of array: " << sum << std::endl
		<< "Average value is " << average << std::endl;

	return 0;
}