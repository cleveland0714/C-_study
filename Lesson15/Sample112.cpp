#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> vt;
	for (int i = 0; i < 10; i++) {
		vt.push_back(i);
	}
	cout << "•À‚×‘Ö‚¦‘O‚Í";
	vector<int>::iterator it = vt.begin();
	while (it != vt.end()) {
		cout << *it;
		it++;
	}
	cout << "‹t‡‚É‚·‚é‚Æ";
	reverse(vt.begin(), vt.end());
	it = vt.begin();
	while (it != vt.end()) {
		cout << *it;
		it++;
	}
	cout << "‚Å‚·\n";
	cout << "•À‚×‘Ö‚¦Œã‚Í";
	sort(vt.begin(), vt.end());
	it = vt.begin();
	while (it != vt.end()) {
		cout << *it;
		it++;
	}
	cout << "‚Å‚·\n";
}