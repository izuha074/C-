/*
#include<iostream>
using namespace std;

int main()
{
	// 单行格式if语句
	//if(条件){ 条件满足执行的语句 }
	// 实例：输入分数，大于600视为一本，在屏幕上输出
	float score = 0;
	cout << "输入分数：" ;
	cin >> score ;// 输入分数
	if (score >= 600)// if条件语句后不加分号
	{
		cout << "考上一本了！" ;
	}
	cout << "\n单行格式if语句end" << endl;

	// 多行if语句
	// if(条件){满足条件执行的语句}else{不满足条件执行的语句}
	cout << "输入分数：";
	cin >> score ;
	if (score >= 600)
	{
		cout << "一本!" << endl;
	}
	else
	{
		cout << "再见了您嘞！";
	}
	cout << "\n多行格式if语句end" << endl;

	// 多条件if语句
	cout << "输入分数；";
	cin >> score;
	if (score >= 600)
	{
		cout << "一本呦" << endl;
	}
	else if (score >= 500)
	{
		cout << "二本呦" << endl;
	}
	else if (score >= 400)
	{
		cout << "三本呦" << endl;
	}
	else
	{
		cout << "再见了您嘞" << endl;
	}
	cout << "多条件if语句end" << endl;

	system("pause");

	return 0;
}
*/