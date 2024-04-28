#include<iostream>
using namespace std;
#include "swap.h"

//函数的分文件编写
//实现两个整形交换
//函数声明
//void swap(int num1,int num2);
//函数定义
//void swap(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "num1 = " << num1 << endl << "num2 = " << num2 << endl;
//}
//1、创建.h后缀的头文件
//2、创建.cpp后缀的源文件
//3、在头文件中声明函数
//4、在源文件中定义函数

int main()
{
	int a = 10, b = 20;
	swap(a, b);
	cout << "a = " << a << endl << "b = " << b << endl;
	system("pause");

	return 0;
}