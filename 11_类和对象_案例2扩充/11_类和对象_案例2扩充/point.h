#pragma once//防止头文件重复包含
#include<iostream>
using namespace std;

//创建点类，只保留声明
class Point
{
public:
	//设置X,Y
	void set_X(int x);

	void set_Y(int y);

	//读取X,Y
	int get_X();

	int get_Y();

private:
	int p_X;
	int p_Y;
};

