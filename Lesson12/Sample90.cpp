#include<iostream>
using namespace std;
//carクラスの宣言
class car {
	private:
		int num;
		double gas;
	public:
		void show();
		void setNumGas(int n, double g);
};
//carクラスメンバ関数の定義
void car::show() {
	cout << "車のナンバーは" << num << "です\n";
	cout << "ガソリン量は" << gas << "です\n";
}
void car::setNumGas(int n, double g) {
	if (g>0 && g < 1000) {
		num = n;
		gas = g;
		cout << "ナンバーを" << num << "にガソリン量を" << gas << "にしました\n";
	}
	else {
		cout << g << "は正しいガソリン量ではなりません\n";
		cout << "ガソリン量を変更できませんでした\n";
	}
}
int main() {
	car car1;
	//このようなアクセスはできなくなります
	//car1.num=1234;
	//car1.gas=20.5;
	car1.setNumGas(1234, 20.5);
	car1.show();
	cout << "正しくないガソリン量(-10.0)を指定してみます\n";
	car1.setNumGas(1234, -10.0);
	car1.show();
	return 0;
}