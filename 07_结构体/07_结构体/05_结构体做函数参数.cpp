//#include<iostream>
//using namespace std;
//#include<string>
//
////����ѧ���ṹ��
//struct student
//{
//	string name;
//	int age;
//	float score;
//};
//
////��ӡѧ����Ϣ����
////1��ֵ����
//void printstudent01(struct student s)
//{
//	s.age = 100;
//	cout << "ֵ�����Ӻ����д�ӡ\t������" << s.name << "\t���䣺" << s.age << "\t������" << s.score << endl;
//};
//
////2����ַ����
//void printstudent02(struct student* p)
//{
//	p->age = 150;
//	cout << "��ַ�����Ӻ����д�ӡ\t������" << p->name << "\t���䣺" << p->age << "\t������" << p->score << endl;
//}
//int main()
//{
//	//�ṹ������������
//	//��ѧ�����뵽һ�������У���ӡѧ������������Ϣ
//
//	//�����ṹ�����
//	student stu = { "����" , 20 , 85.5 };
//
//	printstudent01(stu);
//	
//	cout << "main�����д�ӡ\t\t������" << stu.name << "\t���䣺" << stu.age  << "\t������" << stu.score << endl;
//
//	printstudent02(&stu);
//
//	cout << "main�����д�ӡ\t\t������" << stu.name << "\t���䣺" << stu.age << "\t������" << stu.score << endl;
//	system("pause");
//
//	return 0;
//}