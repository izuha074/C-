//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
//
///*案例描述:
//学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下设计学生和老师的结构体，
//其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员学生的成员有姓名、考试分数，创建数组存放3名老师，
//通过函数给每个老师及所带的学生赋值最终打印出老师数据以及老师所带的学生数据。*/
////定义学生结构体
//struct student
//{
//	//学生姓名
//	string sName;
//	//学生分数
//	float score;
//};
//
////定义老师结构体
//struct teacher
//{
//	//教师姓名
//	string tName;
//	//学生数组
//	student stuArr[5];
//};
//
////给老师和学生赋值函数
//void allocateSpace(struct teacher Arr[], int len)//tArr[]可以写成*p（指针）
//{
//	string nameSeed = { "ABCDE" };
//	//给老师赋值
//	for (int i = 0; i < len; i++)
//	{
//		Arr[i].tName = "Teacher_";
//		Arr[i].tName += nameSeed[i];
//
//		//通过循环给每名老师学生赋值
//		for (int j = 0; j < 5; j++)
//		{
//			Arr[i].stuArr[j].sName = Arr[i].stuArr[j].sName + "Student_" + nameSeed[i] + "_" + nameSeed[j];
//			//Arr[i].stuArr[j].sName ="Student_" ;
//			//Arr[i].stuArr[j].sName += nameSeed[j];
//			
//			//分数设成随机数
//			int random = rand() % 61 + 40;//40~100
//			Arr[i].stuArr[j].score = random;
//		}
//	}
//
//};
////打印所有信息
//void printInfo(teacher Arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "教师姓名：" << Arr[i].tName << endl;
//
//		for (int j = 0; j < 5; j++)
//		{
//			cout << Arr[i].stuArr[j].sName << " 分数：" << Arr[i].stuArr[j].score << endl;
//		}
//		cout << endl;
//	}
//	
//};
//int main()
//{
//	//随机数种子
//	srand((unsigned int)time(NULL));
//	//创建三名老师的数组
//	struct teacher tArr[3];
//
//	//通过函数给三名老师的信息赋值，并给老师的学生信息赋值
//	int len = sizeof tArr / sizeof tArr[0];
//	allocateSpace(tArr, len);
//
//	//打印所有老师和老师所带学生信息
//	printInfo(tArr, len);
//	system("pause");
//
//	return 0;
//}