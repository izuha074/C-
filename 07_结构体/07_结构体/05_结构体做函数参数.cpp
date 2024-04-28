//#include<iostream>
//using namespace std;
//#include<string>
//
////定义学生结构体
//struct student
//{
//	string name;
//	int age;
//	float score;
//};
//
////打印学生信息函数
////1、值传递
//void printstudent01(struct student s)
//{
//	s.age = 100;
//	cout << "值传递子函数中打印\t姓名：" << s.name << "\t年龄：" << s.age << "\t分数：" << s.score << endl;
//};
//
////2、地址传递
//void printstudent02(struct student* p)
//{
//	p->age = 150;
//	cout << "地址传递子函数中打印\t姓名：" << p->name << "\t年龄：" << p->age << "\t分数：" << p->score << endl;
//}
//int main()
//{
//	//结构体做函数参数
//	//将学生传入到一个参数中，打印学生身上所有信息
//
//	//创建结构体变量
//	student stu = { "张三" , 20 , 85.5 };
//
//	printstudent01(stu);
//	
//	cout << "main函数中打印\t\t姓名：" << stu.name << "\t年龄：" << stu.age  << "\t分数：" << stu.score << endl;
//
//	printstudent02(&stu);
//
//	cout << "main函数中打印\t\t姓名：" << stu.name << "\t年龄：" << stu.age << "\t分数：" << stu.score << endl;
//	system("pause");
//
//	return 0;
//}