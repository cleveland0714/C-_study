#include<iostream>
using namespace std;
//buyŠÖ”‚ÌéŒ¾
void buy(int x = 10);
//buyŠÖ”‚ÌŒÄ‚Ño‚µ
int main() {
	cout << "1‰ñ–Ú‚Í100–œ‰~‚Åw“ü‚µ‚Ü‚·\n";
	buy(100);
	cout << "2‰ñ–Ú‚ÍƒfƒtƒHƒ‹ƒg‹àŠz‚Åw“ü‚µ‚Ü‚·\n";
	buy();
	return 0;
}
//buyŠÖ”‚Ì’è‹`
void buy(int x) {
	cout << x << "–œ‰~‚ÌÔ‚ğ”ƒ‚¢‚Ü‚µ‚½\n";
}