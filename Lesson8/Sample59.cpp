#include<iostream>
using namespace std;
int main() {
	int a = 5;
	int b = 10;
	int* pa;
	pa = &a;
	cout << "�ϐ�a�̃A�h���X��" << a << "�ł�\n";
	cout << "�|�C���^pa�̒l��" << pa << "�ł�\n";
	cout << "*pa�̒l��" << *pa << "�ł�\n";
	pa = &b;
	cout << "�ϐ�b�̒l��" << b << "�ł�\n";
	cout << "�|�C���^pa�̒l��" << pa << "�ɕύX����܂���\n";
	cout << "*pa�̒l��" << *pa << "�ł�\n";
	return 0;
}