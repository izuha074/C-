//#include<iostream>
//using namespace std;
//
////�������캯������ʱ��
//
////1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//
////2��ֵ���ݵķ�ʽ������������ֵ
//
////3��ֵ��ʽ���ؾֲ�����
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//	
//	Person(int age)
//	{
//		cout << "Person�вι��캯������" << endl;
//		p_Age = age;
//	}
//
//	Person(const Person &p)
//	{
//		cout << "Person�������캯������" << endl;
//		p_Age = p.p_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//	
//	int p_Age;
//};
//
////1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//}
//
////2��ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork(p);
//}
//
////3��ֵ��ʽ���ؾֲ�����
//Person doWork2()
//{
//	Person p1;
//	cout << &p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << &p << endl;
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//
//	return 0;
//}