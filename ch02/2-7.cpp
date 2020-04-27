#include<iostream>

using namespace std;

void printtime(int h, int m);

int main() {
	int minute;
	int hour;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	printtime(hour, minute);
	return 0;
}

void printtime(int h, int m) {
	cout << h << ": " << m;
}
