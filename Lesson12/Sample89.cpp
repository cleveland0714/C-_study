#include<iostream>
using namespace std;
//carクラスの宣言
class car {
public:
	int num;
	double gas;
	void show();
};
//carクラスメンバ関数の定義
void car::show() {
	cout << "車のナンバーは" << num << "です\n";
	cout << "ガソリン量は" << gas << "です\n";
}
int main() {
	car car1;
	car1.num = 1234;
	car1.gas = 20.5;
	car1.show();
	return 0;
}
