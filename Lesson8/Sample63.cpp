#include<iostream>
using namespace std;
int main() {
	int a = 5;
	int& rA = a;
	cout << "�ϐ�a�̒l��" << a << "�ł�\n";
	cout << "�Q��rA�̒l��" << rA << "�ł�\n";
	rA = 50;
	cout << "rA��50�������܂���\n";
	cout << "�Q��rA�̒l��" << rA << "�ɕύX����܂���\n";
	cout << "�ϐ�a�̒l��" << a << "�ɕύX����܂���\n";
	cout << "�ϐ�a�̃A�h���X��" << &a << "�ł�\n";
	cout << "�Q��rA�̃A�h���X��" << &rA << "�ł�\n";
	return 0;
}