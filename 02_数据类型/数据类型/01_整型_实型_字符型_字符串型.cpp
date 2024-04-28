/*
#include<iostream>
#include<string>//为c++风格字符串添加的头文件
using namespace std;

int main()
{

	//占用内存长度 sizeof(数据类型 或 变量名称)
	short num1 = 10;
	int num2 = 2;
	cout << sizeof(num1) << endl;
	cout << sizeof(int) << endl;

	//单精度float;双精度double
	//默认情况下输出小数有6位有效数字。
	float f1 = 3.14f;//3.14后添加f减少一步双精度到单精度转换。
	cout << "f1 =  " << f1 << endl;

	//字符型 （占用1字节）
	//字符型变量要用单引号。
	char ch = 'a';
	cout << ch << endl;
	//字符型变量对应ASCII码
	cout << (int)ch << endl;
	//可以直接赋值

	//字符串型 两种风格
	//字符串型变量要用双引号
	//c程序风格 char 字符串名[]
	char str1[] = "ohayou";
	cout << str1 << endl;
	//c++风格  此风格添加额外头文件<string>
	string str2 = "ohayou";
	cout << "\t" << str2 << endl;


	system("pause");

	return 0;
}
*/