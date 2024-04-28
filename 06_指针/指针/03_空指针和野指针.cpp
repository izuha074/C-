/*
#include<iostream>
using namespace std;

int main()
{
	//空指针
	//指针指向内存编号位0的空间
	int* p0 = NULL;
	//用于初始话指针变量
	//空指针指向的内存不可访问
	//0~255之间的内存是系统占用的，不可访问（*p会报错）

	//野指针：指针变量指向非法的内存空间
	//程序中尽量避免出现野指针
	//int* p = (int *)0x1100;
	//访问野指针报错
	//cout << *p << endl;

	system("pause");

	return 0;
}
*/