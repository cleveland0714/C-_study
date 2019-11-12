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
	cout << "”z—ñstr1‚Í" << str1 << "‚Å‚·\n";
	cout << "”z—ñstr2‚Í" << str2 << "‚Å‚·\n";
	cout << "˜AŒ‹‚·‚é‚Æ" << str0 << "‚Å‚·\n";
	return 0;
}