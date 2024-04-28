#include"circle.h"

//设置与获取半径
void Circle::set_R(int r)
{
	c_R = r;
}
int Circle::get_R()
{
	return c_R;
}
//设置与读取圆心坐标
void Circle::set_Center(Point center)
{
	c_Center = center;
}
Point Circle::get_Center()
{
	return c_Center;
}

