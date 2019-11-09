#include<iostream>
using namespace std;
int main() {
	int res;
	cout << "¬Ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	cin >> res;
	switch (res)
	{case 1:
	 case 2:
		cout << "‚à‚¤­‚µŠæ’£‚è‚Ü‚µ‚å‚¤\n";
		break;
	 case 3:
	 case 4:
		 cout << "‚±‚Ì’²Žq‚ÅŠæ’£‚è‚Ü‚µ‚å‚¤\n";
		 break;
	 case 5:
		 cout << "‘å•Ï—DG‚Å‚·\n";
		 break;
	default:
		cout << "1~5‚Ü‚Å‚Ì¬Ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
		break;
	}
	return 0;
}