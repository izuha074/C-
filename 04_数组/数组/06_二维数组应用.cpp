#include<iostream>
using namespace std;

int main()
{
	//���Գɼ�ͳ��
	double c1,c2,c3,m1,m2,m3,e1,e2,e3;

	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	cout << "���������ġ�����ɼ��ֱ�Ϊ��" << endl;
	string names[3] = { "����","����","����" };
	for (int i = 0 ; i <= 2 ; i++)
	{
		double sum = 0;
		for (int j = 0; j <= 2; j++)
		{
			sum += scores[i][j];
			cout << scores[i][j] << "\t";
		}
		cout << names[i] << "�ܷ֣�" << sum;
		cout << endl;
	}


	system("pause");

	return 0;
}