#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream fin("test1.txt");
	if (!fin) {
		cout << "�t�@�C�����I�[�v���ł��܂���ł���\n";
		return 1;
	}
	char str1[16];
	char str2[16];
	fin >> str1 >> str2;
	cout << "�t�@�C���ɏ������܂�Ă���2�̕������\n";
	cout << str1 << "�ł�\n";
	cout << str2 << "�ł�\n";
	fin.close();
	return 0;
}