#include<fstream>
#include<iostream>
using namespace std;
int main() {
	ofstream fout("test1.txt");
	if (!fout) {
		cout << "�t�@�C�����I�[�v���ł��܂���ł���\n";
		return 1;
	}
	else cout << "�t�@�C�����I�[�v�����܂���\n";
	fout << "Hello\n";
	fout << "Goodbye\n";
	cout << "�t�@�C���ɏ������݂܂���\n";
	fout.close();
	cout << "�t�@�C�����N���[�Y���܂���\n";
	return 0;
}