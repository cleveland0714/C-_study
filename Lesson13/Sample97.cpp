#include<iostream>
using namespace std;
//carクラスの宣言
class car {
private:
	int num;
	double gas;
public:
	static int sum;
	car();
	void setCar(int n, double g);
	void show();
	static void showSum();
};
//carクラスメンバ関数の定義
car::car() {
	num = 0;
	gas = 0.0;
	sum++;
	cout << "車を作成しました\n";
}
void car::setCar(int n, double g) {
	num = n;
	gas = g;
	cout << "ナンバーを" << num << "にガソリン量を" << gas << "にしました\n";
}
void car::showSum() {
	cout << "車は全部で" << sum << "台あります\n";
}
void car::show() {
	cout << "車のナンバーは" << num << "です\n";
	cout << "ガソリン量は" << gas << "です\n";
}
int car::sum = 0;
//carクラスの利用
int main() {
	car::showSum();
	car car1;
	car1.setCar(1234, 20.5);
	car::showSum();
	car car2;
	car2.setCar(4567, 20.5);
	car::showSum();
	return 0;
}