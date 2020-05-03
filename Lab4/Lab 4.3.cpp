#include <iostream>

void showChoice() {
	std::cout << "Enter ection (+, -, *, /) then enter 2 numbers" << std::endl;
}

double add(double a, double b) {
	return a + b;
}

double substrcut(double a, double b) {
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	return a / b;
}

int main() {
	double a, b;
	char action;

	showChoice();
	std::cout << "Enter action" << std::endl;
	std::cin >> action;
	std::cout << "Enter first num" << std::endl;
	std::cin >> a;
	std::cout << "Enter second num" << std::endl;
	std::cin >> b;

	switch (action)
	{
	case '+':
		std::cout << "Your sum is: " << add(a, b) << std::endl;
		break;
	case '-':
		std::cout << "Your substruct is: " << substrcut(a, b) << std::endl;
		break;
	case '*':
		std::cout << "Your multiply is: " << multiply(a, b) << std::endl;
		break;
	case '/':
		std::cout << "Your divide is: " << divide(a, b) << std::endl;
		break;
	default:;
	}

	return 0;
}