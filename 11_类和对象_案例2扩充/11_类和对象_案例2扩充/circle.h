#pragma once
#include<iostream>
#include"point.h"
using namespace std;

//����Բ��
class Circle
{
public:
	//�������ȡ�뾶
	void set_R(int r);

	int get_R();

	//�������ȡԲ������
	void set_Center(Point center);

	Point get_Center();

private:
	//Բ����
	int c_R;//�뾶
	Point c_Center;//Բ������

};
