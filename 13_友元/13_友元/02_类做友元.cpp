//#include<iostream>
//#include<string>
//using namespace std;
//
////������Ԫ
//
//class Building;
//class GoodBuddy
//{
//public:
//	GoodBuddy();
//public:
//
//	void visit();//�ιۺ��� ����Building�е�����
//
//	Building *build;
//};
//
//class Building
//{
//	//GoodBuddy����Building��ĺ�����
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
////����д��Ա����
//Building::Building()
//{
//	m_LivingRoom = "living room";
//	m_BedRoom = "bedroom";
//}
//
//GoodBuddy::GoodBuddy()
//{
//	//����һ�����������
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