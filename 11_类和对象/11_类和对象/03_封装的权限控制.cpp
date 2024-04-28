//#include<iostream>
//
//using namespace std;
////三种访问权限
////公共权限	public		成员 类内可以访问	类外可以访问
////保护权限	protected	成员 类内可以访问	类外不可以访问	子类可访问父类
////私有权限	private		成员 类内可以访问	类外不可以访问	子类不可访问父类
//
//class Person
//{
//public:
//	string p_name = "Yaku";
//protected:
//	string p_car = "TOYOTA";
//private:
//	string p_password = "123456";
//};
//int main()
//{
//	Person p1;
//	p1.p_name = "Nishigada";
//	//p1.p_car = "Tesla";			//保护权限内容，类外不可访问
//	//p1.p_password = "6544231";	//私有权限内容，类外无法访问
//	system("pause");
//
//	return 0;
//}