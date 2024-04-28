#include<iostream>
using namespace std;

//冒泡排序函数，参数1 首地址 参数2 数组长度
void bubbleSort (int * arr, int len)//* arr 与 arr[]作用相同
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
//打印数组函数
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
	//1、创建数组
	int arr[10] = { 3,6,4,1,5,7,9,8,10,2 };
	int len = sizeof(arr) / sizeof arr[0];

	//2、创建函数实现冒泡排序
	bubbleSort (arr, len);

	//3、输出排列好的数组
	printArr(arr, len);
	system("pause");

	return 0;
}