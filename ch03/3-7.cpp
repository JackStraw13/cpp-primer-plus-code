#include<iostream>
int main() {
	using namespace std;
	const double in2km = 62.14;
	const double g2L = 3.875;
	int cost;
	cout << "Enter the cost in American style:       mpg \b\b\b\b\b\b\b\b\b";
	cin >> cost;
	cout << "The cost in European style is " << g2L * in2km / cost << " /100km";
	return 0;
}
