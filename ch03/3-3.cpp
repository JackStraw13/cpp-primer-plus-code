#include<iostream>

int main() {
	using namespace std;
	int degree;
	int minute;
	int second;
	const float degree2minute = 60;
	const float minute2second = 60;
	float ans;
	cout << "Enter a latitue in degrees, minutes and seconds: \n";
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	cin >> second;
	ans = degree + minute / degree2minute + second / degree2minute / minute2second;
	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds, = " << ans << " degrees";
	return 0;
}
