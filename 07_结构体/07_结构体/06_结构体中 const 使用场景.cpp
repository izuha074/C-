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
////创建打印函数
////将函数中的形参改为指针，可节省使用空间，而且不会复制新副本
//void printStudent(const student * p)
//{
//	//p->age = 150;//加const后，修改会报错，可以防止误操作
//	cout << "子函数中打印\t姓名：" << p->name << "\t年龄：" << p->age << "\t分数：" << p->score << endl;
//}
//int main()
//{
//	//创建结构体变量
//	student s = { "张三" , 16 , 86.4 };
//	printStudent(&s);
//
//	system("pause");
//
//	return 0;
//}