//#include<iostream>
//
//using namespace std;
//
////成员属性设为私有
////1、可以自己控制读写权限
////2、对于写可以检测数据有效性
//
////人类
//class Person
//{
//public:
//	//设置姓名
//	void setName(string name)
//	{
//		p_Name = name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return p_Name;
//	}
//	//设置年龄
//	void setAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			cout << "Error: Age is out of range(0~150)" << endl;
//			return;
//		}
//		p_Age = age;
//	}
//	//获取年龄
//	int getAge()
//	{
//		return p_Age;
//	}
//	//设置动画
//	void setAnime(string Anime)
//	{
//		p_Anime = Anime;
//	}
//private:
//	string p_Name;//姓名	可读可写
//
//	int p_Age = 18;//年龄 只读	也可以写（0~150）
//
//	string p_Anime;//动画 只写
//};
//int main()
//{
//	Person p1;
//	//姓名设置
//	p1.setName("Yaku");
//	//姓名读取
//	cout << "Name: " << p1.getName() << endl;
//
//	//年龄设置
//	int p1_Name;
//	cin >> p1_Name;
//	p1.setAge(p1_Name);
//	//年龄读取
//	cout << "Age: " << p1.getAge() << endl;
//	
//	//动画设置
//	p1.setAnime("Re:0");
//	system("pause");
//	return 0;
//}