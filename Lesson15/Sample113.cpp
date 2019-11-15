#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "1‚©‚ç9‚Ü‚Å‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	cin >> num;
	try {
		if (num <= 0)
			throw "0ˆÈ‰º‚ğ“ü—Í‚µ‚Ü‚µ‚½";
		if (num >= 10)
			throw "10ˆÈã‚ğ“ü—Í‚µ‚Ü‚µ‚½\n";
		cout << num << "‚Å‚·\n";
	}
	catch (char* err) {
		cout << "ƒGƒ‰[:" << err << '\n';
		return 1;
	}
	return 0;
}