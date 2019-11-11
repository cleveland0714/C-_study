#include<iostream>
using namespace std;
int main() {
	int a = 5;
	int b = 10;
	int* pa;
	pa = &a;
	cout << "変数aのアドレスは" << a << "です\n";
	cout << "ポインタpaの値は" << pa << "です\n";
	cout << "*paの値は" << *pa << "です\n";
	pa = &b;
	cout << "変数bの値は" << b << "です\n";
	cout << "ポインタpaの値は" << pa << "に変更されました\n";
	cout << "*paの値は" << *pa << "です\n";
	return 0;
}