#include<iostream>
using namespace std;
int main() {
	int a;
	int* pa;
	a = 5;
	pa = &a;
	cout << "•Ï”a‚Ì’l‚Í" << a << "‚Å‚·\n";
	*pa = 50;
	cout << "*pa‚É50‚ğ‘ã“ü‚µ‚Ü‚µ‚½\n";
	cout << "•Ï”a‚Ì’l‚Í" << a << "‚Å‚·\n";
	return 0;
}