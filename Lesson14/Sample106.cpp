#include<iostream>
using namespace std;

//Base1�N���X�̐錾
class Base1 {
protected:
	int bs1;
public:
	Base1(int b1 = 0) { bs1 = b1; }
	void showBs();
};

//Base2�N���X�̐錾
class Base2 {
protected:
	int bs2;
public:
	Base2(int b2 = 0) { bs2 = b2; }
	void showBs();
};

//Derived�N���X�̐錾
class Derived :public Base1, public Base2 {
protected:
	int dr;
public:
	Derived(int d = 0) { dr = d; }
	void showDr();
};

//Base1�N���X�����o�֐��̎肬
void Base1::showBs() {
	cout << "bs1��" << bs1 << "�ł�\n";
}
//Base2�N���X�����o�֐��̒�`
void Base2::showBs() {
	cout << "bs2��" << bs2 << "�ł�\n";
}
//Derived�N���X�����o�֐��̒�`
void Derived::showDr() {
	cout << "dr��" << dr << "�ł�\n";
}

int main() {
	Derived drv;
	drv.Base1::showBs();
	drv.Base2::showBs();
	drv.showDr();
	return  0;
}