#include<iostream>
using namespace std;
//�\���̌^car�̐錾
struct car {
	int num;
	double gas;
};
//show�֐��̐錾
void show(car* pC);
int main() {
	car car1 = { 0,0.0 };
	cout << "�i���o�[����͂��Ă�������\n";
	cin >> car1.num;
	cout << "�K�\�����ʂ���͂��Ă�������\n";
	cin >> car1.gas;
	show(&car1);
	return 0;
}
//show�֐��̒�`
void show(car* pC) {
	cout << "�Ԃ̃i���o�[��" << pC->num << "�K�\�����ʂ�" << pC->gas << "�ł�\n";
}