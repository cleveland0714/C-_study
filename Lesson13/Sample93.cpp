#include<iostream>
using namespace std;
//carクラスの宣言
class car {
private:
	int num;
	double gas;
public:
	car();
	car(int n, double g);
	void show();
};
//carクラスメンバ関数の定義
car::car() {
	num = 0;
	gas = 0.0;
	cout << "車を作成しました\n";
}
car::car(int n, double g) {
	num = n;
	gas = g;
	cout << "ナンバー" << num << "ガソリン量" << gas << "の車を作成しました\n";
}
void car::show() {
	cout << "車のナンバーは" << num << "です\n";
	cout << "ガソリン量は" << gas << "です\n";
}
int main() {
	car car1;
	car car2(1234, 20.5);
	return 0;
}