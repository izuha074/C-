#include<iostream>
using namespace std;
#include<string>

//��Ա��������Ԫ
class Building;
class GoodBuddy
{
public:
	GoodBuddy();

	void visit1();//��visit1�������Է���Building��˽�г�Ա
	void visit2();//��visit2���������Է���Building��˽�г�Ա
	Building *build;
};

class Building
{
public:
	friend void GoodBuddy::visit1();
public:
	Building();
public:
	string m_LivingRoom;
private:
	string m_BedRoom;
};

//����ʵ�ֳ�Ա����
Building::Building()
{
	m_LivingRoom = "living room";
	m_BedRoom = "bedroom";
}

GoodBuddy::GoodBuddy()
{
	build = new Building;
}

void GoodBuddy::visit1()
{
	cout << "your good buddy is visiting your " << build->m_LivingRoom << endl;
	cout << "your good buddy is visiting your " << build->m_BedRoom << endl;
}

void GoodBuddy::visit2()
{
	cout << "your good buddy is visiting your " << build->m_LivingRoom << endl;
	//cout << "your good buddy is visiting your " << build->m_BedRoom << endl;
}

void test01()
{
	GoodBuddy gb;
	gb.visit1();
	gb.visit2();
}

int main()
{
	test01();
	system("pause");

	return 0;
}