#include<iostream>
using namespace std;
int main() {
	int a;
	int* pa;
	a = 5;
	pa = &a;
	cout << "�ϐ�a�̒l��" << a << "�ł�\n";
	cout << "�ϐ�a�̃A�h���X(&a)��" << &a << "�ł�\n";
	cout << "�|�C���^pa�̒l��" << pa << "�ł�\n";
	return 0;
}