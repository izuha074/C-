#include<iostream>

using namespace std;
//���Բ��ϵ����

//��������
class Point
{
public:
	//����X,Y
	void set_X(int x)
	{
		p_X = x;
	}
	void set_Y(int y)
	{
		p_Y = y;
	}
	//��ȡX,Y
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

//����Բ��
class Circle
{
public:
	//�������ȡ�뾶
	void set_R(int r)
	{
		c_R = r;
	}
	int get_R()
	{
		return c_R;
	}
	//�������ȡԲ������
	void set_Center(Point center)
	{
		c_Center = center;
	}
	Point get_Center()
	{
		return c_Center;
	}
private:
	//Բ����
	int c_R;//�뾶
	Point c_Center;//Բ������

};
//�������ƽ������
int distanceSq(Point p1, Point p2)
{
	return (p1.get_X() - p2.get_X()) * (p1.get_X() - p2.get_X()) + (p1.get_Y() - p2.get_Y()) * (p1.get_Y() - p2.get_Y());
}
//�жϹ�ϵ����
void pcRelate( Point &point , Circle &circle)
{
	int distance = distanceSq(point, circle.get_Center());
	if (distance > circle.get_R() * circle.get_R())
		cout << "����Բ��" << endl;
	else if(distance == circle.get_R() * circle.get_R())
		cout << "����Բ��" << endl;
	else if (distance < circle.get_R() * circle.get_R())
		cout << "����Բ��" << endl;
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