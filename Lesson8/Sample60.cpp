#include<iostream>
using namespace std;
int main() {
	int a;
	int* pa;
	a = 5;
	pa = &a;
	cout << "�ϐ�a�̒l��" << a << "�ł�\n";
	*pa = 50;
	cout << "*pa��50�������܂���\n";
	cout << "�ϐ�a�̒l��" << a << "�ł�\n";
	return 0;
}