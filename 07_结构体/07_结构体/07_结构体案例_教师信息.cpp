//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
//
///*��������:
//ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ�������������ѧ������ʦ�Ľṹ�壬
//��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Աѧ���ĳ�Ա�����������Է���������������3����ʦ��
//ͨ��������ÿ����ʦ��������ѧ����ֵ���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�*/
////����ѧ���ṹ��
//struct student
//{
//	//ѧ������
//	string sName;
//	//ѧ������
//	float score;
//};
//
////������ʦ�ṹ��
//struct teacher
//{
//	//��ʦ����
//	string tName;
//	//ѧ������
//	student stuArr[5];
//};
//
////����ʦ��ѧ����ֵ����
//void allocateSpace(struct teacher Arr[], int len)//tArr[]����д��*p��ָ�룩
//{
//	string nameSeed = { "ABCDE" };
//	//����ʦ��ֵ
//	for (int i = 0; i < len; i++)
//	{
//		Arr[i].tName = "Teacher_";
//		Arr[i].tName += nameSeed[i];
//
//		//ͨ��ѭ����ÿ����ʦѧ����ֵ
//		for (int j = 0; j < 5; j++)
//		{
//			Arr[i].stuArr[j].sName = Arr[i].stuArr[j].sName + "Student_" + nameSeed[i] + "_" + nameSeed[j];
//			//Arr[i].stuArr[j].sName ="Student_" ;
//			//Arr[i].stuArr[j].sName += nameSeed[j];
//			
//			//������������
//			int random = rand() % 61 + 40;//40~100
//			Arr[i].stuArr[j].score = random;
//		}
//	}
//
//};
////��ӡ������Ϣ
//void printInfo(teacher Arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ������" << Arr[i].tName << endl;
//
//		for (int j = 0; j < 5; j++)
//		{
//			cout << Arr[i].stuArr[j].sName << " ������" << Arr[i].stuArr[j].score << endl;
//		}
//		cout << endl;
//	}
//	
//};
//int main()
//{
//	//���������
//	srand((unsigned int)time(NULL));
//	//����������ʦ������
//	struct teacher tArr[3];
//
//	//ͨ��������������ʦ����Ϣ��ֵ��������ʦ��ѧ����Ϣ��ֵ
//	int len = sizeof tArr / sizeof tArr[0];
//	allocateSpace(tArr, len);
//
//	//��ӡ������ʦ����ʦ����ѧ����Ϣ
//	printInfo(tArr, len);
//	system("pause");
//
//	return 0;
//}