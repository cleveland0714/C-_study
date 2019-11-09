#include<iostream>
using namespace std;
int main() {
	char res;
	cout << "‚ ‚È‚½‚Í’j«‚Å‚·‚©H\n";
	cout << "Y‚Ü‚½‚ÍN‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	cin >> res;
	if (res == 'Y' || res == 'y') {
		cout << "‚ ‚È‚½‚Í’j«‚Å‚·‚Ë\n";
	}
	else if (res == 'N' || res == 'n') {
		cout << "‚ ‚È‚½‚Í—«‚Å‚·‚Ë\n";
	}
	else {
		cout << "Y‚©N‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	}
	return 0;
}