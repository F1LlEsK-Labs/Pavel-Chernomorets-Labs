#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Input x" << endl;
	cin >> x;
	(x < 0) ? (cout << "the number is negative" << endl) : (x > 0) ? (cout << "the number is positive" << endl) : (cout << "the number is zero" << endl);

	return 0;
}