#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));
	int r = rand() % 90 + 10;

	std::cout << r;

	return 0;
}