//#include<iostream>
//
//using namespace std;
//
////��Ա������Ϊ˽��
////1�������Լ����ƶ�дȨ��
////2������д���Լ��������Ч��
//
////����
//class Person
//{
//public:
//	//��������
//	void setName(string name)
//	{
//		p_Name = name;
//	}
//	//��ȡ����
//	string getName()
//	{
//		return p_Name;
//	}
//	//��������
//	void setAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			cout << "Error: Age is out of range(0~150)" << endl;
//			return;
//		}
//		p_Age = age;
//	}
//	//��ȡ����
//	int getAge()
//	{
//		return p_Age;
//	}
//	//���ö���
//	void setAnime(string Anime)
//	{
//		p_Anime = Anime;
//	}
//private:
//	string p_Name;//����	�ɶ���д
//
//	int p_Age = 18;//���� ֻ��	Ҳ����д��0~150��
//
//	string p_Anime;//���� ֻд
//};
//int main()
//{
//	Person p1;
//	//��������
//	p1.setName("Yaku");
//	//������ȡ
//	cout << "Name: " << p1.getName() << endl;
//
//	//��������
//	int p1_Name;
//	cin >> p1_Name;
//	p1.setAge(p1_Name);
//	//�����ȡ
//	cout << "Age: " << p1.getAge() << endl;
//	
//	//��������
//	p1.setAnime("Re:0");
//	system("pause");
//	return 0;
//}