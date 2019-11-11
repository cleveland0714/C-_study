#include<iostream>
using namespace std;
int main() {
	int a;
	int* pa;
	a = 5;
	pa = &a;
	cout << "変数aの値は" << a << "です\n";
	cout << "変数aのアドレス(&a)は" << &a << "です\n";
	cout << "ポインタpaの値は" << pa << "です\n";
	return 0;
}