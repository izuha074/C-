#pragma once
#include<iostream>
#include"point.h"
using namespace std;

//创建圆类
class Circle
{
public:
	//设置与获取半径
	void set_R(int r);

	int get_R();

	//设置与读取圆心坐标
	void set_Center(Point center);

	Point get_Center();

private:
	//圆参数
	int c_R;//半径
	Point c_Center;//圆心坐标

};
