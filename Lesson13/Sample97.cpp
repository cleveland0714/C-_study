#include<iostream>
using namespace std;
//car�N���X�̐錾
class car {
private:
	int num;
	double gas;
public:
	static int sum;
	car();
	void setCar(int n, double g);
	void show();
	static void showSum();
};
//car�N���X�����o�֐��̒�`
car::car() {
	num = 0;
	gas = 0.0;
	sum++;
	cout << "�Ԃ��쐬���܂���\n";
}
void car::setCar(int n, double g) {
	num = n;
	gas = g;
	cout << "�i���o�[��" << num << "�ɃK�\�����ʂ�" << gas << "�ɂ��܂���\n";
}
void car::showSum() {
	cout << "�Ԃ͑S����" << sum << "�䂠��܂�\n";
}
void car::show() {
	cout << "�Ԃ̃i���o�[��" << num << "�ł�\n";
	cout << "�K�\�����ʂ�" << gas << "�ł�\n";
}
int car::sum = 0;
//car�N���X�̗��p
int main() {
	car::showSum();
	car car1;
	car1.setCar(1234, 20.5);
	car::showSum();
	car car2;
	car2.setCar(4567, 20.5);
	car::showSum();
	return 0;
}