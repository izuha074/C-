#include"circle.h"

//�������ȡ�뾶
void Circle::set_R(int r)
{
	c_R = r;
}
int Circle::get_R()
{
	return c_R;
}
//�������ȡԲ������
void Circle::set_Center(Point center)
{
	c_Center = center;
}
Point Circle::get_Center()
{
	return c_Center;
}

