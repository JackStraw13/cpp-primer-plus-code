#include<iostream>
int main() {
	using namespace std;
	long sec;
	const int day2hour = 24;
	const int hour2minute = 60;
	const int minute2second = 60;
	int second;
	int minute;
	int hour;
	int day;
	cout << "Enter the number of seconds: ";
	cin >> sec;
	day = sec / (day2hour * hour2minute * minute2second);
	hour = (sec / (hour2minute * minute2second)) % day2hour;
	minute = (sec / (minute2second)) % hour2minute;
	second = sec % minute2second;
	cout << sec << " second = " << day << " days, " << hour << " hours, " << minute << " minutes, " << second << "seconds";
	return 0;
}
