#include<iostream>
using namespace std;
int main() {
	int res;
	cout << "���т���͂��Ă�������\n";
	cin >> res;
	switch (res)
	{case 1:
	 case 2:
		cout << "���������撣��܂��傤\n";
		break;
	 case 3:
	 case 4:
		 cout << "���̒��q�Ŋ撣��܂��傤\n";
		 break;
	 case 5:
		 cout << "��ϗD�G�ł�\n";
		 break;
	default:
		cout << "1~5�܂ł̐��т���͂��Ă�������\n";
		break;
	}
	return 0;
}