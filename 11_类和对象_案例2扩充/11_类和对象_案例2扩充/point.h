#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;

//�������ֻ࣬��������
class Point
{
public:
	//����X,Y
	void set_X(int x);

	void set_Y(int y);

	//��ȡX,Y
	int get_X();

	int get_Y();

private:
	int p_X;
	int p_Y;
};

