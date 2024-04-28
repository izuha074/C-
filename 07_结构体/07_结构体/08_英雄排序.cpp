#include<iostream>
using namespace std;

//案例描述:
//设计一个英雄的结构体，包括成员姓名，年龄，性别; 
//创建结构体数组，数组中存放5名英雄通过冒泡排序的算法，
//将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
//
//["刘备", 23, "男"}, 
//["关羽", 22, "男"}, 
//["张飞", 20, "男"}, 
//["赵云", 21, "男"},
//["貂蝉", 19, "女"},

//创建英雄结构体
struct hero
{
	string name;
	int age;
	string render;
};
//冒泡排序函数
void bubbleSort(hero h[],int len)
{
	hero temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (h[j].age > h[j + 1].age)
			{
				temp = h[j];
				h[j] = h[j + 1];
				h[j + 1] = temp;
			}
		}
	}
}
//打印信息函数
void printHero(hero h[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << h[i].name << "\t" << h[i].age << "\t" << h[i].render << endl;
	}
}
int main()
{
	//创建结构体数组
	hero hMessage[5] =
	{
		{"刘备", 23, "男"},
		{"关羽", 22, "男"},
		{"张飞", 20, "男"},
		{"赵云", 21, "男"},
		{"貂蝉", 19, "女"},
	};
	int len = sizeof hMessage / sizeof(hMessage[0]);
	//冒泡排序
	bubbleSort(hMessage, len);
	//打印英雄信息
	printHero(hMessage, len);
	
	system("pause");

	return 0;
}