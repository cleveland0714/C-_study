#include<iostream>
using namespace std;
//�\���̌^car�̐錾
struct car {
	int num;
	double gas;
};
//show�֐��̐錾
void show(car c);
int main() {
	car car1 = { 0, 0.0 };
	cout << "�i���o�[����͂��Ă�������\n";
	cin >> car1.num;
	cout << "�K�\�����ʂ���͂��Ă�������\n";
	cin >> car1.gas;
	show(car1);
	return 0;
}
//show�֐��̐錾
void show(car c) {
	cout << "�Ԃ̃i���o�[��" << c.num << "�K�\�����ʂ�" << c.gas << "�ł�\n";
}