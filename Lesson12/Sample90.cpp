#include<iostream>
using namespace std;
//car�N���X�̐錾
class car {
	private:
		int num;
		double gas;
	public:
		void show();
		void setNumGas(int n, double g);
};
//car�N���X�����o�֐��̒�`
void car::show() {
	cout << "�Ԃ̃i���o�[��" << num << "�ł�\n";
	cout << "�K�\�����ʂ�" << gas << "�ł�\n";
}
void car::setNumGas(int n, double g) {
	if (g>0 && g < 1000) {
		num = n;
		gas = g;
		cout << "�i���o�[��" << num << "�ɃK�\�����ʂ�" << gas << "�ɂ��܂���\n";
	}
	else {
		cout << g << "�͐������K�\�����ʂł͂Ȃ�܂���\n";
		cout << "�K�\�����ʂ�ύX�ł��܂���ł���\n";
	}
}
int main() {
	car car1;
	//���̂悤�ȃA�N�Z�X�͂ł��Ȃ��Ȃ�܂�
	//car1.num=1234;
	//car1.gas=20.5;
	car1.setNumGas(1234, 20.5);
	car1.show();
	cout << "�������Ȃ��K�\������(-10.0)���w�肵�Ă݂܂�\n";
	car1.setNumGas(1234, -10.0);
	car1.show();
	return 0;
}