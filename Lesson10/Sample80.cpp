#include<iostream>
using namespace std;
int main() {
	int* pA;
	pA = new int;
	cout << "���I�Ƀ��������m�ۂ��܂���\n";
	*pA = 10;
	cout << "���I�Ɋm�ۂ������������g����" << *pA << "���o�͂��Ă��܂�\n";
	delete pA;
	cout << "�m�ۂ�����������������܂���\n";
	return 0;
}