#include<iostream>
using namespace std;
//�\���̌^car�̐錾
struct car {
	int num;
	double gas;
};
int main() {
	car car1 = { 1234,25.5 };
	car car2 = { 4567, 52.2 };
	cout << "car1�̃i���o�[��" << car1.num << "�K�\�����ʂ�" << car1.gas << "�ł�\n";
	cout << "car2�̃i���o�[��" << car2.num << "�K�\�����ʂ�" << car2.gas << "�ł�\n";
	car2 = car1;
	cout << "car1��car2�ɑ�����܂���\n";
	cout << "car2�̎Ԃ̃i���o�[��" << car2.num << "�K�\�����ʂ�" << car2.gas << "�ł�\n";
	return 0;
}