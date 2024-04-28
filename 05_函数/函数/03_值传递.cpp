/*
#include<iostream>
using namespace std;

//值传递
//定义可实现值互换的函数
//函数不需要返回值时，声明可以写void
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}
int main()
{
	int a = 10;
	int b = 20;
	//做值传递时，函数的形参改变，并不会影响实参
	swap(a, b);
	system("pause");

	return 0;
}
*/