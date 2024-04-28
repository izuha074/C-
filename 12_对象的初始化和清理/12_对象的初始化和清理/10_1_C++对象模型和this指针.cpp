//#include<iostream>
//
//using namespace std;
//
////成员变量 和 成员函数 分开储存
//
//class Person
//{
//
//	int m_A;//非静态成员变量 属于类对象上
//	
//	static int m_B;//静态成员变量 不属于类对象上
//
//	void func()//非静态成员函数 不属于类对象上
//	{
//
//	}
//};
//
//int Person::m_B = 100;
//
//void test01()
//{
//	Person p;
//	//空对象占用内存空间为
//	cout << "size of p = " << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//	//空对象占用内存空间为
//	cout << "size of p = " << sizeof(p) << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}