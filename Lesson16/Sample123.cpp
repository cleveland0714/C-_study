#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream fout("test0.txt");
	if (!fout) {
		cout << "�t�@�C�����I�[�v���ł��܂���ł���\n";
		return 1;
	}
	else cout << "�t�@�C�����I�[�v�����܂���\n";
	fout.close();
	cout << "�t�@�C�����N���[�Y���܂���\n";
	return 0;
}