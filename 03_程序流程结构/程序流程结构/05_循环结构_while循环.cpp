/*
#include<iostream>
using namespace std;
// timeϵͳʱ��ͷ�ļ�����
#include<ctime>

int main()
{
	srand((unsigned int)time(NULL));// ������������ ���ã����õ�ǰϵͳʱ���������������ֹÿ���������ͬ
	// while(ѭ������){ѭ�����}
	// ע�������ѭ��
	// ����Ļ�ϴ�ӡ���� 0~9
	int num = 0;
	while (num < 10)
	{
		cout << num << endl;
		num++;
	}
	// whileѭ������ ������
	int num_rand = rand() % 100 + 1;// rand() % 100 ����0~100�����
	int val = 0;
	cout << "����²�ֵ��";
	while(1)
	{
		cin >> val;
		if (val > num_rand)
		{
			cout << "����" << endl;
		}
		else if (val < num_rand)
		{
			cout << "С��" << endl;
		}
		else
		{
			cout << "���" << endl;
			break;// break�ؼ����˳���ǰѭ��
		}
	}


	system("pause");

	return 0;
}
*/