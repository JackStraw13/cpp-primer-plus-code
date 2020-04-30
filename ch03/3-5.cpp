#include<iostream>
int main() {
	using namespace std;
	long long world_population;
	long long USA_population;
	cout << "Enter the world's population: ";
	cin >> world_population;
	cout << "Enter the population of the US: ";
	cin >> USA_population;
	cout << "The population of the US is " << double(USA_population) / world_population * 100 << "% of the world population";
	return 0;
}
