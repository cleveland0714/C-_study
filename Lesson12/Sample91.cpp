#include<iostream>
using namespace std;
//car�N���X�̐錾
class car {
private:
	int num;
	double gas;
public:
	int getNum() { return num; }
	double getGas() { return gas; }
	void show();
	void setNumGas(int n, double g);
};
//car�N���X�����o�֐��̒�`
void car::show() {
	cout << "�Ԃ̃i���o�[��" << num << "�ł�\n";
	cout << "�K�\�����ʂ�" << gas << "�ł�\n";
}
void car::setNumGas(int n, double g) {
	if (g > 0 && g < 1000) {
		num = n;
		gas = g;
		cout << "�i���o�[��" << num << "�ɃK�\�����ʂ�" << gas << "�ɂ��܂���\n";
	}
	else {
		cout << g << "�͐������K�\�����ʂł͂���܂���\n";
		cout << "�K�\�����ʂ�ύX�ł��܂���ł���\n";
	}
}
//buy�֐��̐錾
void buy(car c);
int main() {
	car car1;
	car1.setNumGas(1234, 20.5);
	buy(car1);
	return 0;
}
//buy�֐��̒�`
void buy(car c) {
	int n = c.getNum();
	double g = c.getGas();
	cout << "�i���o�[" << n << "�K�\������" << g << "�̎Ԃ��w�����܂���\n";
}