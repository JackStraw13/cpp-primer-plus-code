#include<iostream>

int main() {
	using namespace std;
	const int factor = 12;
	int height;
	cout << "Enter your height: _______\b\b\b\b\b\b";
	cin >> height;
	cout << height / factor << "foot " << height % factor << "inch";
	return 0;
}
