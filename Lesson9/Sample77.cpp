#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char str0[20];
	char str1[10];
	char str2[10];
	strcpy(str1, "Hello");
	strcpy(str2, "Goodbye");
	strcpy(str0, str1);
	strcat(str0, str2);
	cout << "�z��str1��" << str1 << "�ł�\n";
	cout << "�z��str2��" << str2 << "�ł�\n";
	cout << "�A�������" << str0 << "�ł�\n";
	return 0;
}