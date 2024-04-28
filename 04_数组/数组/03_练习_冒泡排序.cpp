/*
#include<iostream>
using namespace std;

int main()
{
	int arrb[] = { 4,2,8,0,5,7,1,3,9 };//创建要比较的数组元素
	int num = sizeof arrb / sizeof(arrb[0]);//数组元素个数
	for (int j = 0; j <= num - 1; j++)//输出排序前的元素
	{
		cout << arrb[j] << endl;
	}
	cout << "以上为原数组元素" << endl;
	int cyc = 0;//排序轮数
	int i = 0;//首元素下标
	int end = num - 2;//排序中需要比较的最后一对元素的下标
	int temp;//创建临时存储位
	while (end >= 0)
	{
		for (i = 0; i <= end; i++)//比较相邻元素
		{
			if (arrb[i] < arrb[i + 1])
			{
				temp = arrb[i];//互换相邻元素
				arrb[i] = arrb[i + 1];
				arrb[i + 1] = temp;
			}
		}
		i = 0;
		end--;
	}
	for (int t = 0; t <= num - 1; t++)//输出排序好的元素
	{
		cout << arrb[t] << endl;
	}
	cout << "以上为排序后元素" << endl;
	
	system("pause");

	return 0;
}*/
