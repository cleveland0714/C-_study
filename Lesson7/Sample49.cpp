#include<iostream>
using namespace std;
//sum�֐��̒�`
int sum(int x, int y) {
	return x + y;
}
int main() {
	int  num1, num2, ans;
	cout << "1�Ԗڂ̐�������͂��Ă�������\n";
	cin >> num1;
	cout << "2�Ԗڂ̐�������͂��Ă�������\n";
	cin >> num2;
	ans = sum(num1, num2);
	cout << "���v��" << ans << "�ł�\n";
	return 0;
}