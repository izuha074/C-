//#include<iostream>
//
//using namespace std;
//
////静态成员函数
////所有对象共享同一个函数
////静态成员函数只能访问静态成员变量
//
//class Person
//{
//public:
//
//	//静态成员函数
//	static void func()
//	{
//		p_a = 100;//静态成员函数可以访问静态成员变量
//		//p_b = 200;
//		cout << "static void func调用" << endl;
//	}
//
//	static int p_a;
//	int p_b;
//
//	//静态成员函数有访问权限
//private:
//	static void func02()
//	{
//
//	}
//};
//
//int Person::p_a = 0;
//
//void test01()
//{
//	//1、通过对象访问
//	Person p;
//	p.func();
//	//2、通过类名调用
//	Person::func();
//}
//int main()
//{
//	test01();
//	system("pause");
//
//	return 0;
//}