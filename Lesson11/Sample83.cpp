#include<iostream>
using namespace std;
//�\���̌^Car�̐錾
struct Car {
	int num;
	double gas;
};
int main() {
	Car car1;
	cout << "�i���o�[����͂��Ă�������\n";
	cin >> car1.num;
	cout << "�K�\�����ʂ���͂��Ă�������\n";
	cin >> car1.gas;
	cout << "�Ԃ̃i���o�[��" << car1.num << "�K�\�����ʂ�" << car1.gas << "�ł�\n";
	return 0;
}