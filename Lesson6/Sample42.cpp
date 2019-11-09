#include<iostream>
using namespace std;
int main() {
	int res;
	cout << "‰½”Ô–Ú‚Ìˆ—‚ð”ò‚Î‚µ‚Ü‚·‚©(1~10)\n";
	cin >> res;
	for (int i = 1; i <= 10; i++) {
		if (i == res)
			continue;
		cout << i << "”Ô–Ú‚Ìˆ—‚Å‚·\n";
	}
	return 0;
}