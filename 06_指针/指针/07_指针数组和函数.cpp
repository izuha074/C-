#include<iostream>
using namespace std;

//ð��������������1 �׵�ַ ����2 ���鳤��
void bubbleSort (int * arr, int len)//* arr �� arr[]������ͬ
{
	//int len = 10;//sizeof(arr) / sizeof arr[0];
	int temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//��ӡ���麯��
void printArr(int * arr, int len)
{
	//int len =  sizeof(arr) / sizeof arr[0];
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	//1����������
	int arr[10] = { 3,6,4,1,5,7,9,8,10,2 };
	int len = sizeof(arr) / sizeof arr[0];

	//2����������ʵ��ð������
	bubbleSort (arr, len);

	//3��������кõ�����
	printArr(arr, len);
	system("pause");

	return 0;
}