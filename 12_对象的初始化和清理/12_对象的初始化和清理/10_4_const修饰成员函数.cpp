#include<iostream>

using namespace std;

//������
class Person
{
public:

	//thisָ��ı��� ��ָ�볣�� ָ���ָ�򲻿��޸�
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		//this->m_A = 100;
		this->m_B = 100;
	}
	void testfunc01()
	{

	}

	int m_A;
	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable
};


void test01()
{
	Person p;
	p.showPerson();
}

//������

void  test02()
{
	const Person p;
	p.m_A = 100;
	p.m_B = 100;

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.testfunc01();//������ �����Ե�����ͨ��Ա���� ��Ϊ��ͨ��Ա���������޸�����

}
int main()
{

	system("pause");

	return 0;
}