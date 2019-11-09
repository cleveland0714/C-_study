#include<iostream>
using namespace std;
int main() {
	int num;
	int sum = 0;
	cout << "‚¢‚­‚Â‚Ü‚Å‚Ì‡Œv‚ğ‹‚ß‚Ü‚·‚©?\n";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	cout << "1‚©‚ç" << num << "‚Ü‚Å‚Ì‡Œv’l‚Í" << sum << "‚Å‚·\n";
	return 0;
}