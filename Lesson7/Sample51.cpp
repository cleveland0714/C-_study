#include<iostream>
using namespace std;
//maxŠÖ”‚Ì’è‹`
inline int max(int x, int y) { if (x > y)return x; else return y; }
int main() {
	int num1, num2, ans;
	cout << "1”Ô–Ú‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	cin >> num1;
	cout << "2”Ô–Ú‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	cin >> num2;
	ans = max(num1, num2);
	cout << "Å‘å’l‚Í" << ans << "‚Å‚·\n";
	return 0;
}