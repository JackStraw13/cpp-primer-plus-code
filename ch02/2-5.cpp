#include<iostream>

int main() {
	using namespace std;
	double celsius;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	cout << celsius << " degrees Celsius is " << 1.8 * celsius + 32.0 << " degrees Fahrenheit";
	return 0;
}
