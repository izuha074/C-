//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10, b = 20;
//	//const ����ָ��
//	//����ָ��
//	//ָ��ָ����Ըģ�ָ��ָ���ֵ�����Ը�(*p�����޸�)
//	const int * p0 = &a;
//	cout << "a =  " << a << endl << "p0 =" << p0 << endl << "* p0 = " << *p0 << endl;
//	a = 30;
//	cout << "a =  " << a << endl << "p0 =" << p0 << endl << "* p0 = " << *p0 << endl;
//	p0 = &b;
//	cout << "b =  " << b << endl << "p0 =" << p0 << endl << "* p0 = " << *p0 << endl <<endl;
//	//const ���γ���
//	//ָ�볣��
//	//ָ��ָ�򲻿��Ըģ�����ָ��ָ���ֵ���Ը�
//	a = 10;
//	int * const p1 = &a;
//	cout << "a =  " << a << endl << "p1 =" << p1 << endl << "* p1 = " << *p0 << endl;
//	*p1 = b;
//	cout << "b =  " << b << endl << "a = " << a << endl << "p1 =" << p1 << endl << "* p1 = " << *p0 << endl;
//	system("pause");
//	//����ָ��ͳ���
//	const int* const p3 = &a;
//
//	return 0;
//}