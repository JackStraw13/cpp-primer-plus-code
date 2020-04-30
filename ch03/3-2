#include<iostream>

int main() {
	using namespace std;
	const int factor_foot2inch = 12;
	const float factor_inch2m = 0.0254;
	const float factor_kg2pound = 2.2;
	int height_foot;
	int height_inch;
	int weight;
	float height;
	cout << "Enter your height (foot and inch):\n" << "foot: ";
	cin >> height_foot;
	cout << "inch: ";
	cin >> height_inch;
	cout << "Enter your weight (pounds): ";
	cin >> weight;
	height = (height_foot * factor_foot2inch + height_inch) * factor_inch2m;
	cout << "BMI: " << weight / factor_kg2pound / height / height;
	return 0;
}
