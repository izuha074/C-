//#include<iostream>
//using namespace std;
//
////构造函数的调用规则
////1、创建一个类，C++编译器会给每个类都添加至少3个函数
////默认构造（空实现）
////析构函数（空实现）
////拷贝构造（值拷贝）
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p)
//	{
//		//将传入的人身上的所有属性，拷贝到自己身上
//		cout << "Person的拷贝构造函数调用" << endl;
//		age = p.age;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	int age;
//};
//int main()
//{
//	Person p1;
//	p1.age = 18;
//	Person p2(p1);
//	cout << p2.age << endl;
//	system("pause");
//
//	return 0;
//}