#include<iostream>
#include<typeinfo>
using namespace std;
//Vehicle�N���X�̐錾
class Vehicle {
protected:
	int speed;
public:
	void setSpeed(int s);
	virtual void show() = 0;
};

//Car�N���X�̐錾
class Car :public Vehicle {
private:
	int num;
	double gas;
public:
	Car(int n, double g);
	void show();
};

//Plane�N���X�̐錾
class Plane :public Vehicle {
private:
	int flight;
public:
	Plane(int f);
	void show();
};

//Vehicle�N���X�����o�֐��̒�`
void Vehicle::setSpeed(int s) {
	speed = s;
	cout << "���x��" << speed << "�ɂ��܂���\n";
}

//Car�N���X�����o�֐��̒�`
Car::Car(int n, double g) {
	num = n;
	gas = g;
	cout << "�i���o�[" << num << "�K�\������" << gas << "�̎Ԃ��쐬���܂���\n";
}

void Car::show() {
	cout << "�Ԃ̃i���o�[��" << num << "�ł�\n";
	cout << "�K�\�����ʂ�" << gas << "�ł�\n";
	cout << "���x��" << speed << "�ł�\n";
}

//Plane�N���X�����o�֐��̒�`
Plane::Plane(int f) {
	flight = f;
	cout << "��" << flight << "�̔�s�@���쐬���܂���\n";
}
void Plane::show() {
	cout << "��s�@�̕ւ�" << flight << "�ł�\n";
	cout << "���x��" << speed << "�ł�\n";
}

int main() {
	Vehicle* pVc[2];
	Car car1(1234, 20.5);
	Plane pln1(234);
	pVc[0] = &car1;
	pVc[1] = &pln1;
	for (int i = 0; i < 2; i++) {
		if (typeid(*pVc[i]) == typeid(Car))
			cout << (i + 1) << "�Ԗڂ�" << typeid(Car).name() << "�ł�\n";
		else
			cout << (i + 1) << "�Ԗڂ�" << typeid(Car).name() << "�ł͂���܂���" << typeid(*pVc[i]).name() << "�ł�\n";
	}
}