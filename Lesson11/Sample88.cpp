#include<iostream>
using namespace std;
//���p�̌^year�̐錾
union year {
	int ad;
	int gengo;
};
int main() {
	year myyear;
	cout << "�������͂��Ă�������\n";
	cin >> myyear.ad;
	cout << "�����" << myyear.ad << "�ł�\n";
	cout << "������" << myyear.gengo << "�ł�\n";
	cout << "��������͂��Ă�������\n";
	cin >> myyear.gengo;
	cout << "������" << myyear.gengo << "�ł�\n";
	cout << "�����" << myyear.ad << "�ł�\n";
	return 0;
}