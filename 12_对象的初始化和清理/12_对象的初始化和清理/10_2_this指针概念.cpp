//#include<iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指针指向 被调用的成员函数 所属的对象
//		this->age = age;
//	}
//
//	Person & PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//		//this指向p2的指针，*this指向p2这个对象本体
//		return *this;
//	}
//	int age;
//};
////1、解决名称冲突
//void test01()
//{
//	Person p1(18);
//	cout << "the age of p1 is :" << p1.age << endl;
//}
////2、返回对象本身用*this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "the summary of p1 and p2's age for four times is :" << p2.age << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//
//	return 0;
//}