#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");

	int a, b, c;

	cout << "������� ������ ��������" << endl;
	cin >> a;

	cout << "������� ������ ��������" << endl;
	cin >> b;

	c = a + b;

	cout << "����� " << c << endl;
	return 0;
}