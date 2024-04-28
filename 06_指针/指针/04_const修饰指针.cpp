//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10, b = 20;
//	//const 修饰指针
//	//常量指针
//	//指针指向可以改，指针指向的值不可以改(*p不可修改)
//	const int * p0 = &a;
//	cout << "a =  " << a << endl << "p0 =" << p0 << endl << "* p0 = " << *p0 << endl;
//	a = 30;
//	cout << "a =  " << a << endl << "p0 =" << p0 << endl << "* p0 = " << *p0 << endl;
//	p0 = &b;
//	cout << "b =  " << b << endl << "p0 =" << p0 << endl << "* p0 = " << *p0 << endl <<endl;
//	//const 修饰常量
//	//指针常量
//	//指针指向不可以改，但是指针指向的值可以改
//	a = 10;
//	int * const p1 = &a;
//	cout << "a =  " << a << endl << "p1 =" << p1 << endl << "* p1 = " << *p0 << endl;
//	*p1 = b;
//	cout << "b =  " << b << endl << "a = " << a << endl << "p1 =" << p1 << endl << "* p1 = " << *p0 << endl;
//	system("pause");
//	//修饰指针和常量
//	const int* const p3 = &a;
//
//	return 0;
//}