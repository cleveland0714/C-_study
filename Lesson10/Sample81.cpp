#include<iostream>
using namespace std;
int main() {
	int num;
	int* pT;
	cout << "���l�̃e�X�g�̓_������͂��܂���\n";
	cin >> num;
	pT = new int[num];
	cout << "�l�����̓_������͂��Ă�������\n";
	for (int i = 0; i < num; i++) {
		cin >> pT[i];
	}
	for (int j = 0; j < num; j++){
		cout<<j+1<<"�Ԗڂ̐l�̓_����"<<pT[j]<<"�ł�\n";
	}
	delete[] pT;
	return 0;
}