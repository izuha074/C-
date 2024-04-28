//#include<iostream>
//using namespace std;
//
////1、创建学生数据类型 学生包括（姓名，年龄，分数）
////自定义数据类型，一些数据类型的集合
////语法：struct 类型名称 { 成员列表 )
//struct Student
//{
//	//成员列表
//
//	//姓名
//	string name;
//	//年龄
//	int age;
//	//分数
//	float score;
//}s3;//顺便创建结构体变量
////2、通过学生类型创建具体学生
//
//
//int main()
//{
//	//2.1 struct Student s1
//	//struct 关键字可以省略
//	struct Student s1;
//	//给s1书属性赋值，通过.访问结构体变量中的属性
//	s1.name = "张三";
//	s1.age = 20;
//	s1.score = 99.9;
//	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
//	//2.2 struct Student s2 = { .... }
//	struct Student s2 = { "李四" , 18 , 80 };
//	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
//	//2.3 定义结构体时顺便创建结构体变量
//	s3.name = "王五";
//	s3.age = 22;
//	s3.score = 75;
//	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;
//	system("pause");
//
//	return 0;
//}