#include<iostream>

int main() {
	using namespace std;
	double light;
	cout << "Enter the number of light years: ";
	cin >> light;
	cout << light << " light years = " << 63240 * light << " astronomical units.";
	return 0;
}
