#include<iostream>
using namespace std;
//car�N���X�̐錾
class car {
private: 
	int num;
	double gas;
public:
	car();
	car(int n, double g);
	void show();
};
//car�N���X�����o�֐��̒�`
car::car() {
	num = 0;
	gas = 0.0;
	cout << "�Ԃ��쐬���܂���\n";
}
car::car(int n, double g) {
	num = n;
	gas = g;
	cout << "�i���o�[" << num << "�K�\������" << gas << "�̎Ԃ��쐬���܂���\n";
}
void car::show() {
	cout << "�Ԃ̃i���o�[��" << num << "�ł�\n";
	cout << "�K�\�����ʂ�" << gas << "�ł�\n";
}
int main() {
	car mycars[3] = {
		car(),
		car(1234,25.5),
		car(4567,52.2)
	};
	return 0;
}