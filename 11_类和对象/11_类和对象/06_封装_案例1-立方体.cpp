//#include<iostream>
//#include<cstdlib>
//
//using namespace std;
////创建立方体类
//class Cube
//{
//public:
//	//行为
//	void set_l(double l)//设置长
//	{
//		c_l = l;
//	}
//	void set_w(double w)//设置宽
//	{
//		c_w = w;
//	}
//	void set_h(double h)//设置高
//	{
//		c_h = h;
//	}
//	double get_l()//获取长
//	{
//		return c_l;
//	}
//	double get_w()//获取宽
//	{
//		return c_w;
//	}
//	double get_h()//获取高
//	{
//		return c_h;
//	}
//	double get_V()//获取体积
//	{
//		return c_l * c_w * c_h;
//	}
//	double get_C()//获取面积
//	{
//		return 2 * ((c_l * c_w) + (c_l * c_h) + (c_h + c_w));
//	}
//	bool isSameByClass(Cube &c)
//	{
//		if (c_l == c.get_l() &&
//			c_w == c.get_w() &&
//			c_h == c.get_h())
//			return true;
//		else
//			return false;
//	}
//private:
//	//属性
//	double c_l;	//长
//	double c_w;	//宽
//	double c_h;	//高
//
//};
//
////利用全局函数判断 两个立方体是否相等
//bool isSame(Cube &c1, Cube &c2)
//{
//	if (c1.get_l() == c2.get_l() &&
//		c1.get_w() == c2.get_w() &&
//		c1.get_h() == c2.get_h())
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	Cube c1;
//	c1.set_l(2);
//	c1.set_w(3);
//	c1.set_h(4);
//
//	Cube c2;
//	c2.set_l(2);
//	c2.set_w(3);
//	c2.set_h(4);
//	//利用全局函数判断
//	bool psame = isSame(c1, c2);
//	if (psame)
//		cout << "全局判断相等" << endl;
//	else
//		cout << "全局判断不相等" << endl;
//	//利用成员函数判断	
//	bool csame = c1.isSameByClass(c2);
//	if (psame)
//		cout << "成员判断相等" << endl;
//	else
//		cout << "成员判断不相等" << endl;
//	system("pause");
//
//	return 0;
//}