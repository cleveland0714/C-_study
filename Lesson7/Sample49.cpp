#include<iostream>
using namespace std;
//sumŠÖ”‚Ì’è‹`
int sum(int x, int y) {
	return x + y;
}
int main() {
	int  num1, num2, ans;
	cout << "1”Ô–Ú‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	cin >> num1;
	cout << "2”Ô–Ú‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	cin >> num2;
	ans = sum(num1, num2);
	cout << "‡Œv‚Í" << ans << "‚Å‚·\n";
	return 0;
}