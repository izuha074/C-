//#include<iostream>
//using namespace std;
//
////���캯���ĵ��ù���
////1������һ���࣬C++���������ÿ���඼�������3������
////Ĭ�Ϲ��죨��ʵ�֣�
////������������ʵ�֣�
////�������죨ֵ������
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person���вι��캯������" << endl;
//	}
//	//�������캯��
//	Person(const Person &p)
//	{
//		//������������ϵ��������ԣ��������Լ�����
//		cout << "Person�Ŀ������캯������" << endl;
//		age = p.age;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
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