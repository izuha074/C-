//#include<iostream>
//
//using namespace std;
//
////构造函数的分类及调用
////分类
////	按照参数分类		无参构造（默认构造）和 有参构造
////	按照类型分类		普通构造 拷贝构造
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p)
//	{
//		//将传入的人身上的所有属性，拷贝到自己身上
//		cout << "Person的拷贝构造函数调用" << endl;
//		age = p.age;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	int age;
//};
//
////调用
//void test01()
//{
//	//1、括号法
//	Person p1_1;//默认构造函数调用
//	Person p1_2(10);//有参构造函数
//	Person p1_3(p1_2);//拷贝构造函数
//
//	//注意事项
//	//调用默认构造函数时，不要加()
//
//	//2、显示法
//	Person p2_1;
//	Person p2_2 = Person(10);//有参构造
//	Person p2_3 = Person(p2_2);//拷贝构造
//
//	Person(10);//匿名对象 特点：当前执行结束后，系统会立即回收匿名对象
//	cout << "aaa" << endl;
//
//	//不要利用拷贝构造函数，初始化匿名对象
//	//编译器会认为 Person(p2_3) 等价于Person p2_3
//	//Person(p2_3);
//
//	//3、隐式转换法
//	Person p2_4 = 10;//相当于写了 Person p2_4 = Person(10) 有参构造
//	Person p2_5 = p2_4;//拷贝构造
//
//}
//int main()
//{
//	test01();
//	system("pause");
//
//	return 0;
//}