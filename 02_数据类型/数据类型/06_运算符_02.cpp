#include<iostream>
using namespace std;

int main()
{
	//比较运算符
	int a = 10, b = 20;
	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a < b) << endl;
	cout << (a <= b) << endl;
	cout << (a > b) << endl;
	cout << (a >= b) << "\n比较运算符end" << endl;

	//逻辑运算符 非
	a = 10;
	cout << !a << endl; //C++中除了0都为真
	cout << !!a << "\n非end" << endl;
	// 逻辑 与  都为真结果才为真
	a = 10, b = 10;
	cout << (a && b) << endl;
	a = 0, b = 10;
	cout << (a && b) << "\n与end" << endl;
	// 逻辑 或
	a = 10, b = 10;
	cout << (a || b) << endl;
	a = 0, b = 10;
	cout << (a || b) << endl;
	a = 0, b = 0;
	cout << (a || b) << "\n或end" << endl;

		system("pause");

	return 0;
}