#include<iostream>
using namespace std;
//‹¤—p‘ÌŒ^year‚ÌéŒ¾
union year {
	int ad;
	int gengo;
};
int main() {
	year myyear;
	cout << "¼—ï‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	cin >> myyear.ad;
	cout << "¼—ï‚Í" << myyear.ad << "‚Å‚·\n";
	cout << "Œ³†‚à" << myyear.gengo << "‚Å‚·\n";
	cout << "Œ³†‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	cin >> myyear.gengo;
	cout << "Œ³†‚Í" << myyear.gengo << "‚Å‚·\n";
	cout << "¼—ï‚à" << myyear.ad << "‚Å‚·\n";
	return 0;
}