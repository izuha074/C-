//#include<iostream>
//#include<cstdlib>
//
//using namespace std;
////������������
//class Cube
//{
//public:
//	//��Ϊ
//	void set_l(double l)//���ó�
//	{
//		c_l = l;
//	}
//	void set_w(double w)//���ÿ�
//	{
//		c_w = w;
//	}
//	void set_h(double h)//���ø�
//	{
//		c_h = h;
//	}
//	double get_l()//��ȡ��
//	{
//		return c_l;
//	}
//	double get_w()//��ȡ��
//	{
//		return c_w;
//	}
//	double get_h()//��ȡ��
//	{
//		return c_h;
//	}
//	double get_V()//��ȡ���
//	{
//		return c_l * c_w * c_h;
//	}
//	double get_C()//��ȡ���
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
//	//����
//	double c_l;	//��
//	double c_w;	//��
//	double c_h;	//��
//
//};
//
////����ȫ�ֺ����ж� �����������Ƿ����
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
//	//����ȫ�ֺ����ж�
//	bool psame = isSame(c1, c2);
//	if (psame)
//		cout << "ȫ���ж����" << endl;
//	else
//		cout << "ȫ���жϲ����" << endl;
//	//���ó�Ա�����ж�	
//	bool csame = c1.isSameByClass(c2);
//	if (psame)
//		cout << "��Ա�ж����" << endl;
//	else
//		cout << "��Ա�жϲ����" << endl;
//	system("pause");
//
//	return 0;
//}