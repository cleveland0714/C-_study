#include<iostream>
using namespace std;
int main() {
	int res;
	cout << "���Ԗڂ̏������΂��܂���(1~10)\n";
	cin >> res;
	for (int i = 1; i <= 10; i++) {
		if (i == res)
			continue;
		cout << i << "�Ԗڂ̏����ł�\n";
	}
	return 0;
}