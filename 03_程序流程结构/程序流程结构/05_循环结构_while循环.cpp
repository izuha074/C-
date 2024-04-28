/*
#include<iostream>
using namespace std;
// time系统时间头文件包含
#include<ctime>

int main()
{
	srand((unsigned int)time(NULL));// 添加随机数种子 作用：利用当前系统时间生成随机数，防止每次随机数相同
	// while(循环条件){循环语句}
	// 注意避免死循环
	// 在屏幕上打印数字 0~9
	int num = 0;
	while (num < 10)
	{
		cout << num << endl;
		num++;
	}
	// while循环案例 猜数字
	int num_rand = rand() % 100 + 1;// rand() % 100 生成0~100随机数
	int val = 0;
	cout << "输入猜测值：";
	while(1)
	{
		cin >> val;
		if (val > num_rand)
		{
			cout << "大了" << endl;
		}
		else if (val < num_rand)
		{
			cout << "小了" << endl;
		}
		else
		{
			cout << "对喽" << endl;
			break;// break关键字退出当前循环
		}
	}


	system("pause");

	return 0;
}
*/