#include<iostream>
using namespace std;
//buyŠÖ”‚Ì’è‹`
int buy(int x, int y) {
	int z;
	cout << x << "–œ‰~‚Æ" << y << "–œ‰~‚ÌÔ‚ğ”ƒ‚¢‚Ü‚µ‚½\n";
	z = x + y;
	return z;
}
int main() {
	int num1, num2, sum;
	cout << "‚¢‚­‚ç‚ÌÔ‚ğ”ƒ‚¢‚Ü‚·‚©H\n";
	cin >> num1;
	cout << "‚¢‚­‚ç‚ÌÔ‚ğ”ƒ‚¢‚Ü‚·‚©H\n";
	cin >> num2;
	sum = buy(num1, num2);
	cout << "‡Œv‚Å" << sum << "–œ‰~‚Å‚·\n";
	return 0;
}