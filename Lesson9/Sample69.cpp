#include<iostream>
using namespace std;
int main() {
	int test[5] = { 80,60,55,22,75 };
	cout << "test[0]�̒l��" << test[0] << "�ł�\n";
	cout << "test[0]�̃A�h���X��" << &test[0] << "�ł�\n";
	cout << "test�̒l��" << test << "�ł�\n";
	cout << "�܂�*test�̒l��" << *test << "�ł�\n";
	return 0;
}