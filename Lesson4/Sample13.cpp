#include<iostream>
using namespace std;
int main() {
	int n = 2, m = 3;
	int sum = n + m;
	cout << "nの値は" << n << "です\n";
	cout << "mの値は" << m << "です\n";
	cout << "n+mの値は" << sum << "です\n";
	n = n + 1;
	cout << "変数nの値に1を足すと" << n << "です\n";
	return 0;
}