/*
#include<iostream>
using namespace std;

int main()
{
	int arrb[] = { 4,2,8,0,5,7,1,3,9 };//����Ҫ�Ƚϵ�����Ԫ��
	int num = sizeof arrb / sizeof(arrb[0]);//����Ԫ�ظ���
	for (int j = 0; j <= num - 1; j++)//�������ǰ��Ԫ��
	{
		cout << arrb[j] << endl;
	}
	cout << "����Ϊԭ����Ԫ��" << endl;
	int cyc = 0;//��������
	int i = 0;//��Ԫ���±�
	int end = num - 2;//��������Ҫ�Ƚϵ����һ��Ԫ�ص��±�
	int temp;//������ʱ�洢λ
	while (end >= 0)
	{
		for (i = 0; i <= end; i++)//�Ƚ�����Ԫ��
		{
			if (arrb[i] < arrb[i + 1])
			{
				temp = arrb[i];//��������Ԫ��
				arrb[i] = arrb[i + 1];
				arrb[i + 1] = temp;
			}
		}
		i = 0;
		end--;
	}
	for (int t = 0; t <= num - 1; t++)//�������õ�Ԫ��
	{
		cout << arrb[t] << endl;
	}
	cout << "����Ϊ�����Ԫ��" << endl;
	
	system("pause");

	return 0;
}*/
