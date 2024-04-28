//#include<iostream>
//
//using namespace std;
//
///*静态成员变量
//*所有对象共享同一份数据
//*在编译阶段分配内存
//*类内声明 类外初始化
//*/
//class Person
//{
//public:
//	static int p_a;
//	//静态成员变量也有访问权限
//private:
//	static int p_b;
//};
//
//int Person::p_a = 100;
//int Person::p_b = 200;
//
//void test01()
//{
//	Person p;
//	cout << p.p_a << endl;
//
//	Person p2;
//	p2.p_a = 200;
//	cout << p.p_a << endl;
//}
//
//void test02()
//{
//	//静态成员变量 不属于某个对象上 所有对象共享一份数据
//	//因此静态成员对象有两种访问方式
//
//	//1、通过对象进行访问
//	Person p;
//	cout << p.p_a << endl;
//	//2、通过类名进行访问
//	cout << Person::p_a << endl;
//	//cout << Person::p_b << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//
//	return 0;
//}