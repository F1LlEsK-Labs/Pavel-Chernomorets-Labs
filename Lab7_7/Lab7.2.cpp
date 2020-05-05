#include <iostream>
#include <iomanip>

using namespace std;

struct student {
	int number;
	const char* name;
	bool math;
	bool physic;
	bool english;
};

int main() {
	const int n = 25;
	int i, nameLength;

	/** Declaimer: all matches are random **/
	student a[n] = {
			{1,  "Barack Obama",   true,  false, true},
			{2,  "Simon Cowell",  true,  false, true},
			{3,  "Tony blair",    false, true,  false},
			{4,  "Mark Zuckerberg",    false, true,  true},
			{5,  "Steve Jobs",    true,  true,  true},
			{6,  "Usain Bolt",    true,  false, false},
			{7,  "Oprah Winfrey",       true,  false, true},
			{8,  "Vladimir Putin",    true,  false, false},
			{9,  "Larry Page",      false, false, true},
			{10, "Sergey Brin",     true,  false, true},
			{11, "Bill Gates", true,  false, true},
			{12, "Albert Einstein",   true,  true,  false},
			{13, "Christopher Columbus",   true,  false, true},
			{14, "Charlie Chaplin",      false, true,  true},
			{15, "Adolf Gitler", true,  false, true},
			{16, "Leonardo Da Vinci",  true,  true,  true},
			{17, "Nikola Tesla",      true,  false, true},
			{18, "Elon Musk",      true,  true,  false},
			{19, "John Kennedy",  false, true,  true},
			{20, "Vladimir Zelensky",       false, false, false},
			{21, "Audrey Hepburn",         false, false, true},
			{22, "Pablo Picasso",       true,  false, false},
			{23, "Vivien leigh",  true,  true,  true},
			{24, "Marlon Brando",     false, true,  false},
			{25, "Louis Armstrong",  true,  true,  true}
	};

	cout << "ID#\t"
		<< setw(22) << left << "Students name"
		<< setw(8) << "Math"
		<< setw(8) << "Physic"
		<< setw(8) << "English"
		<< endl;

	for (i = 0; i < n; i++) {
		cout << a[i].number << "\t"
			<< setw(22) << a[i].name
			<< setw(8) << a[i].math
			<< setw(8) << a[i].physic
			<< setw(8) << a[i].english
			<< endl;
	}

	cout << "----------------------------------------------" << endl;
	cout << "Students that failed more then 1 exam" << endl;
	cout << "---------------------------------------------" << endl;

	for (i = 0; i < n; i++) {
		if ((int)a[i].math + (int)a[i].physic + (int)a[i].english <= 1) {
			cout << a[i].number << "\t"
				<< setw(22) << a[i].name
				<< setw(8) << a[i].math
				<< setw(8) << a[i].physic
				<< setw(8) << a[i].english
				<< endl;
		}
	}

	cout << "---------------------------------------------" << endl;
	return 0;
}