//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//	//传统初始化初值
//	//Person(int a, int b, int c) {
//	//	p_a = a;
//	//	p_b = b;
//	//	p_c = c;
//	//}
//
//	//初始化列表初始化属性
//	//Person() :p_a(10), p_b(20), p_c(30) 
//	Person(int a , int b , int c):p_a(a) , p_b(b) , p_c(c)
//	{
//
//	}
//	int p_a;
//	int p_b;
//	int p_c;
//
//};
//
//void test01() {
//	//Person p(10 , 20 , 30)
//
//	Person p(30 , 20 , 10);
//	cout << "p_a = " << p.p_a << endl;
//	cout << "p_b = " << p.p_b << endl;
//	cout << "p_c = " << p.p_c << endl;
//}
//int main() {
//	test01();
//
//	system("pause");
//
//	return 0;
//}