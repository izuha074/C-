#include<iostream>
using namespace std;

int main()
{
	//考试成绩统计
	double c1,c2,c3,m1,m2,m3,e1,e2,e3;

	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	cout << "张三、李四、王五成绩分别为：" << endl;
	string names[3] = { "张三","李四","王五" };
	for (int i = 0 ; i <= 2 ; i++)
	{
		double sum = 0;
		for (int j = 0; j <= 2; j++)
		{
			sum += scores[i][j];
			cout << scores[i][j] << "\t";
		}
		cout << names[i] << "总分：" << sum;
		cout << endl;
	}


	system("pause");

	return 0;
}