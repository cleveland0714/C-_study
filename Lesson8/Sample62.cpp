#include<iostream>
using namespace std;
//swap�֐��̐錾
void swap(int* px, int* py);
int main() {
	int num1 = 5;
	int num2 = 10;
	cout << "�ϐ�num1�̒l��" << num1 << "�ł�\n";
	cout << "�ϐ�num2�̒l��" << num2 << "�ł�\n";
	cout << "�ϐ�num1��num2�̒l���������܂�\n";
	swap(&num1, &num2);
	cout << "�ϐ�num1�̒l��" << num1 << "�ł�\n";
	cout << "�ϐ�num2�̒l��" << num2 << "�ł�\n";
	return 0;
}
//swap�֐��̒�`
void swap(int* px, int* py) {
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}