#include<iostream>
using namespace std;
int main() {
	char res;
	cout << "���Ȃ��͒j���ł����H\n";
	cout << "Y�܂���N����͂��Ă�������\n";
	cin >> res;
	if (res == 'Y' || res == 'y') {
		cout << "���Ȃ��͒j���ł���\n";
	}
	else if (res == 'N' || res == 'n') {
		cout << "���Ȃ��͏����ł���\n";
	}
	else {
		cout << "Y��N����͂��Ă�������\n";
	}
	return 0;
}