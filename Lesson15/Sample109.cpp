#include<iostream>
#include<cstring>
using namespace std;
//Car�N���X�̐錾
class Car {
private:
	int num;
	double gas;
	char* pName;
public:
	Car(const char* pN, int n, double g);
	~Car();
	void show();
};
//Car�N���X�����o�֐��̒�`
Car::Car(const char* pN, int n, double g) {
	pName = new char[strlen(pN) + 1];
	strcpy(pName, pN);
	num = n;
	gas = g;
	cout << pName << "���쐬���܂���\n";
}
Car::~Car() {
	cout << pName << "��j�����܂�\n";
	delete[] pName;
}
void Car::show() {
	cout << "�Ԃ̃i���o�[��" << num << "�ł�\n";
	cout << "�K�\�����ʂ�" << gas << "�ł�\n";
	cout << "���O��" << pName << "�ł�\n";
}
//Car�N���X�̗��p
int main() {
	Car Car1("mycar", 1234, 25.5);
	Car1.show();
	return 0;
}