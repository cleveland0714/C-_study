#include<iostream>
using namespace std;
//func�֐��̐錾
void func();
int a = 0;
int main() {
	for (int i = 0; i < 5; i++) {
		func();
	}
	return 0;
}
//func�֐��̒�`
void func() {
	int b = 0;
	static int c = 0;
	cout << "�ϐ�a��" << a << "�ϐ�b��" << b << "�ϐ�c��" << c << "�ł�\n";
	a++;
	b++;
	c++;
}