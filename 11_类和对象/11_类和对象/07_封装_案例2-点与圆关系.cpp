#include<iostream>

using namespace std;
//点和圆关系案例

//创建点类
class Point
{
public:
	//设置X,Y
	void set_X(int x)
	{
		p_X = x;
	}
	void set_Y(int y)
	{
		p_Y = y;
	}
	//读取X,Y
	int get_X()
	{
		return p_X;
	}
	int get_Y()
	{
		return p_Y;
	}
private:
	int p_X;
	int p_Y;
};

//创建圆类
class Circle
{
public:
	//设置与获取半径
	void set_R(int r)
	{
		c_R = r;
	}
	int get_R()
	{
		return c_R;
	}
	//设置与读取圆心坐标
	void set_Center(Point center)
	{
		c_Center = center;
	}
	Point get_Center()
	{
		return c_Center;
	}
private:
	//圆参数
	int c_R;//半径
	Point c_Center;//圆心坐标

};
//两点距离平方函数
int distanceSq(Point p1, Point p2)
{
	return (p1.get_X() - p2.get_X()) * (p1.get_X() - p2.get_X()) + (p1.get_Y() - p2.get_Y()) * (p1.get_Y() - p2.get_Y());
}
//判断关系函数
void pcRelate( Point &point , Circle &circle)
{
	int distance = distanceSq(point, circle.get_Center());
	if (distance > circle.get_R() * circle.get_R())
		cout << "点在圆外" << endl;
	else if(distance == circle.get_R() * circle.get_R())
		cout << "点在圆上" << endl;
	else if (distance < circle.get_R() * circle.get_R())
		cout << "点在圆内" << endl;
}
int main()
{
	Circle circle;
	circle.set_R(10);
	Point center;
	center.set_X(10);
	center.set_Y(0);
	circle.set_Center(center);
	Point point;
	point.set_X(10);
	point.set_Y(10);
	pcRelate(point, circle);

	system("pause");

	return 0;
}