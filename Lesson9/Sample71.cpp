#include<iostream>
using namespace std;
//avg�֐��̐錾
double avg(int t[]);

int main() {
	int test[5];
	cout << "5�l�̃e�X�g�̓_������͂��Ă�������\n";
	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}
	double ans = avg(test);
	cout << "5�l�̕��ϓ_��" << ans << "�_�ł�\n";
	return 0;
}
//avg�֐��̒�`
double avg(int t[]) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += t[i];
	}
	return sum / 5;
}