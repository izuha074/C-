/*
#include<iostream>
using namespace std;

int main()
{
	// 嵌套if语句
	float salary = 0;
	cout << "工资为：";
	cin >> salary;
	if (salary >= 5000)
	{
		cout << "需要缴税" << endl;
		if (salary >= 1000000)                   // 嵌套if
		{
			cout << "拿来吧你" << endl;
		}
		else if (salary >= 80000)                //因为逐行执行，所以需要大数在上
		{
			cout << "缴税20%：" << salary * 0.2 << endl;
		}
		else if (salary >= 10000)
		{
			cout << "缴税10%：" << salary * 0.1 << endl;
		}
		else
		{
			cout << "缴税5%：" << salary * 0.05 << endl;
		}
	}
	else
	{
		cout << "无需缴税" << endl;
	}

	system("pause");

	return 0;
}
*/