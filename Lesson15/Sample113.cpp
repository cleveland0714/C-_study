#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "1����9�܂ł̐�����͂��Ă�������\n";
	cin >> num;
	try {
		if (num <= 0)
			throw "0�ȉ�����͂��܂���";
		if (num >= 10)
			throw "10�ȏ����͂��܂���\n";
		cout << num << "�ł�\n";
	}
	catch (char* err) {
		cout << "�G���[:" << err << '\n';
		return 1;
	}
	return 0;
}