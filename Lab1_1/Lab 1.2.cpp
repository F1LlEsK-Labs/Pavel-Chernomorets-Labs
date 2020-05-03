#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");

	int a, b, c;

	cout << "¬ведите первое значение" << endl;
	cin >> a;

	cout << "¬ведите второе значение" << endl;
	cin >> b;

	c = a + b;

	cout << "—умма " << c << endl;
	return 0;
}