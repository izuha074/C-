#include<iostream>
using namespace std;
#include<string>

//成员函数做友元
class Building;
class GoodBuddy
{
public:
	GoodBuddy();

	void visit1();//让visit1函数可以访问Building中私有成员
	void visit2();//让visit2函数不可以访问Building中私有成员
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

//类外实现成员函数
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