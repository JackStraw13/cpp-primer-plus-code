#include<iostream>
void myfunc1();
void myfunc2();

int main() {
	myfunc1();
	myfunc1();
	myfunc2();
	myfunc2();
	return 0;
}

void myfunc1() {
	using namespace std;
	cout << "Three blind mice\n";
}

void myfunc2() {
	using namespace std;
	cout << "See how they run\n";
}
