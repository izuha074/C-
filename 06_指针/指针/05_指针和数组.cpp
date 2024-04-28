//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//利用指针访问数组中元素
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;//数组名就是数组首地址
//
//	//cout << "利用指针访问数组第一个元素：" << *p << endl;
//
//	//p++;//指针向后偏移四个字节（1*指针引用数据大小）
//
//	//cout << "利用指针访问数组第二个元素：" << *p << endl;
//
//	//利用指针遍历数组
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *p << endl;
//		p++;//或输出*p++
//	}
//	system("pause");
//
//	return 0;
//}