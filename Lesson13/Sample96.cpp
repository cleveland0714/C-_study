#include<iostream>
using namespace std;
//car�N���X�̐錾
class car {
private:
	int num;
	double gas;
public:
	car(int n = 0, double g = 0);
	void show();
};
//car�N���X�����o�֐��̒�`
car::car(int n, double g) {
	num = n;
	gas = g;
	cout << "�i���o�[" << num << "�K�\������" << gas << "�̎Ԃ��쐬���܂���\n";
}
void car::show() {
	cout << "�Ԃ̃i���o�[��" << num << "�ł�\n";
	cout << "�K�\������" << gas << "�ł�\n";
}
int main() {
	car car1;
	car car2(1234, 20.5);
	return 0;
}