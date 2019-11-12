#include<iostream>
using namespace std;
//funcŠÖ”‚ÌéŒ¾
void func();
int a = 0;
int main() {
	for (int i = 0; i < 5; i++) {
		func();
	}
	return 0;
}
//funcŠÖ”‚Ì’è‹`
void func() {
	int b = 0;
	static int c = 0;
	cout << "•Ï”a‚Í" << a << "•Ï”b‚Í" << b << "•Ï”c‚Í" << c << "‚Å‚·\n";
	a++;
	b++;
	c++;
}