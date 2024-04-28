//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building
//{
//	//goodBuddy全局函数是Building的好朋友，可以访问building中的私有成员
//	friend void goodBuddy(Building *build);
//public:
//	Building()
//	{
//		m_LivingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//public:
//	string m_LivingRoom;
//
//private:
//	string m_BedRoom;
//};
//
////全局函数
//void goodBuddy(Building *build) 
//{
//	cout << "your good buddy is doing something in your " << build->m_LivingRoom << endl;
//	cout << "your good buddy is doing something in your " << build->m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building build;
//	goodBuddy(&build);
//
//}
//int main()
//{
//	test01();
//	system("pause");
//
//	return 0;
//}