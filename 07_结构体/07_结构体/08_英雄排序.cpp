#include<iostream>
using namespace std;

//��������:
//���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�; 
//�����ṹ�����飬�����д��5��Ӣ��ͨ��ð��������㷨��
//�������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
//
//["����", 23, "��"}, 
//["����", 22, "��"}, 
//["�ŷ�", 20, "��"}, 
//["����", 21, "��"},
//["����", 19, "Ů"},

//����Ӣ�۽ṹ��
struct hero
{
	string name;
	int age;
	string render;
};
//ð��������
void bubbleSort(hero h[],int len)
{
	hero temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (h[j].age > h[j + 1].age)
			{
				temp = h[j];
				h[j] = h[j + 1];
				h[j + 1] = temp;
			}
		}
	}
}
//��ӡ��Ϣ����
void printHero(hero h[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << h[i].name << "\t" << h[i].age << "\t" << h[i].render << endl;
	}
}
int main()
{
	//�����ṹ������
	hero hMessage[5] =
	{
		{"����", 23, "��"},
		{"����", 22, "��"},
		{"�ŷ�", 20, "��"},
		{"����", 21, "��"},
		{"����", 19, "Ů"},
	};
	int len = sizeof hMessage / sizeof(hMessage[0]);
	//ð������
	bubbleSort(hMessage, len);
	//��ӡӢ����Ϣ
	printHero(hMessage, len);
	
	system("pause");

	return 0;
}