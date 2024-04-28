//#include<iostream>
//
//using namespace std;
//
////空指针调用成员函数
//
//class Person
//{
//public:
//
//	void showClassName()
//	{
//		cout << "class name is Person" << endl;
//	}
//
//	void showPersonAge()
//	{
//		//报错是因为传入的指针为NULL
//
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "The age is : " << m_Age << endl;//等价于this->m_Age
//	}
//	int m_Age;
//};
//
//void test01()
//{
//	Person  *p = NULL;
//
//	p->showClassName();
//	p->showPersonAge();
//}
//int main()
//{
//	test01();
//	system("pause");
//
//	return 0;
//}