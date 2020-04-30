#include<iostream>
int main() {
	using namespace std;
	int displacement;
	int cost;
	cout << "Enter the displacement (km): ";
	cin >> displacement;
	cout << "Enter the cost (L): ";
	cin >> cost;
	cout << "The normalized cost is " << float(cost) / displacement << " L/km";
	return 0;
}
