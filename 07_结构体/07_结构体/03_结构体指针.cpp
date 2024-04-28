//#include<iostream>
//using namespace std;
//
//#include<string>
////结构体指针
////利用操作符 -> 可以通过结构体指针访问结构体属性
////定义学生结构体
//struct Student
//{
//	string name;
//	int age;
//	float score;
//};
//
//int main()
//{
//	//1、创建学生结构体变量
//	Student s1 = { "张三" , 18 , 100 };
//
//	//2、通过指针指向结构体变量
//	Student* p = &s1;
//
//	//3、通过指针访问结构体变量中的数据
//	//通过结构体指针 访问结构体属性 需要用到"->"
//	cout << "姓名：" << p->name << "\n年龄：" << p->age << "\n分数：" << p->score << endl;
//
//	system("pause");
//
//	return 0;
//}