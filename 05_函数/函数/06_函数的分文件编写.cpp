#include<iostream>
using namespace std;
#include "swap.h"

//�����ķ��ļ���д
//ʵ���������ν���
//��������
//void swap(int num1,int num2);
//��������
//void swap(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "num1 = " << num1 << endl << "num2 = " << num2 << endl;
//}
//1������.h��׺��ͷ�ļ�
//2������.cpp��׺��Դ�ļ�
//3����ͷ�ļ�����������
//4����Դ�ļ��ж��庯��

int main()
{
	int a = 10, b = 20;
	swap(a, b);
	cout << "a = " << a << endl << "b = " << b << endl;
	system("pause");

	return 0;
}