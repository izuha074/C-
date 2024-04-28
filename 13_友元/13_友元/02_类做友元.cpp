//#include<iostream>
//#include<string>
//using namespace std;
//
////类做友元
//
//class Building;
//class GoodBuddy
//{
//public:
//	GoodBuddy();
//public:
//
//	void visit();//参观函数 访问Building中的属性
//
//	Building *build;
//};
//
//class Building
//{
//	//GoodBuddy类是Building类的好朋友
//	friend class GoodBuddy;
//public:
//	Building();
//public:
//	string m_LivingRoom;
//
//private:
//	string m_BedRoom;
//
//};
////类外写成员函数
//Building::Building()
//{
//	m_LivingRoom = "living room";
//	m_BedRoom = "bedroom";
//}
//
//GoodBuddy::GoodBuddy()
//{
//	//创建一个建筑物对象
//	build = new Building;
//}
//
//void GoodBuddy::visit()
//{
//	cout << "your good buddy is visiting your " << build->m_LivingRoom << endl;
//	cout << "your good buddy is visiting your " << build->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodBuddy gb;
//	gb.visit();
//}
//int main()
//{
//	test01();
//	system("pause");
//
//	return 0;
//}