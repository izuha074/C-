/*
#include<iostream>
using namespace std;

int main()
{
	// do{ 循环语句 }while( 循环条件 )
	// 与while语句区别：do while 先执行一次循环语句，再判断循环条件
	// 输出0~9
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);

	// 练习 水仙花数
	num = 0;
	do
	{
		int a = 0;//个位
		int b = 0;//十位
		int c = 0;//百位
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if (a*a*a + b*b*b + c*c*c == num)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");

	return 0;
}
*/