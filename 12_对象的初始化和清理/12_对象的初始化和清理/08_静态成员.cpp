//#include<iostream>
//
//using namespace std;
//
///*��̬��Ա����
//*���ж�����ͬһ������
//*�ڱ���׶η����ڴ�
//*�������� �����ʼ��
//*/
//class Person
//{
//public:
//	static int p_a;
//	//��̬��Ա����Ҳ�з���Ȩ��
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
//	//��̬��Ա���� ������ĳ�������� ���ж�����һ������
//	//��˾�̬��Ա���������ַ��ʷ�ʽ
//
//	//1��ͨ��������з���
//	Person p;
//	cout << p.p_a << endl;
//	//2��ͨ���������з���
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