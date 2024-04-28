#include<iostream>
using namespace std;
#include<string>
#define MAX 1000 //�������

//- ��װ������ʾ����
//- main�е��ý��溯��

//��������
void show_Menu()
{
	cout << "\t" << "1�������ϵ��" << endl;
	cout << "\t" << "2����ʾ��ϵ��" << endl;
	cout << "\t" << "3��ɾ����ϵ��" << endl;
	cout << "\t" << "4��������ϵ��" << endl;
	cout << "\t" << "5���޸���ϵ��" << endl;
	cout << "\t" << "6�������ϵ��" << endl;
	cout << "\t" << "0���˳�" << endl;
}
//��ϵ�˽ṹ��
struct member
{
	string name;
	int gender;//�Ա�1�� 2Ů
	int age;
	string phone;
};
//���ͨѶ¼�ṹ��
struct book
{
	//��ϵ�����飬ĩβԤ��һ����������������ǰ��
	struct member mArr[MAX+1];
	//ͨѶ¼�е�ǰ����
	int m_Size;
};
//1�������ϵ�˺���
void addMember(book * b)
{
	//�ж�ͨѶ¼�Ƿ����������˲������
	if (b->m_Size == MAX)
	{
		cout << "ͨѶ¼����" << endl;
		return;
	}
	else
	{
		//�����ϵ��
		//����
		string name;
		cout << "��������" << endl;
		cin >> name;
		b->mArr[b->m_Size].name = name;
		//����
		int age;
		cout << "��������" << endl;
		while (1)
		{
			cin >> age;
			if (age <= 0 || age < 150)
			{
				b->mArr[b->m_Size].age = age;
				break;
			}
			else
			{
				cout << "������Ч����" << endl;
			}						
		}
		//�Ա�
		//1--�� 2--Ů
		int gender = 0;
		cout << "�����Ա�\t1--��\t2--Ů" << endl;
		while (1)
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				b->mArr[b->m_Size].gender = gender;
				break;
			}
			else
			{
				cout << "�����ַ����Ϲ棬��������" << endl;
			}
		}		
		//�绰
		string phone;
		cout << "����绰" << endl;
		cin >> phone;
		b->mArr[b->m_Size].phone = phone;
	}
	cout << "��ӳɹ�" << endl;
	//����ͨѶ¼����
	b->m_Size++;
	system("pause");//�밴���������
	system("cls");//����
}
//2����ʾ��ϵ��
void showMember(book* b)
{
	if (b->m_Size == 0)
	{
		cout << "��ϵ���б�Ϊ��" << endl;
		system("pause"); 
		system("cls");
	}
	else
	{
		for (int i = 0; i < b->m_Size; i++)
		{
			cout << i + 1 << "������" << b->mArr[i].name << "   �Ա�" << (b->mArr[i].gender == 1 ? "��" : "Ů")
				<< "   ���䣺" << b->mArr[i].age << "   �绰��" << b->mArr[i].phone << endl;
				/*<< "   �Ա�";
			if (b->mArr[i].gender == 1)
			{
				cout << "��";
			}
			else
			{
				cout << "Ů";
			}
			cout << "   ���䣺" << b->mArr[i].age << "   �绰��" << b->mArr[i].phone << endl;*/
		}
		system("pause");
		system("cls");
	}
}

//��װ���������ϵ���Ƿ����
//�����ϵ���Ƿ���ڣ����ڷ���λ�ã������ڷ���-1
//����1 ͨѶ¼ ����2 ��������
int ifExist(book* b, string name)
{
	for (int i = 0; i < b->m_Size; i++)
	{
		//�ҵ���������
		if (b->mArr[i].name == name)
		{
			return i;
		}
	}
	return -1;//��������û���ҵ�
}

//��װɾ����ϵ�˺���
//3��ɾ����ϵ��
void delMember(book* b)
{
	cout << "����ɾ����ϵ��" << endl;
	string name;
	cin >> name;
	int exist = ifExist(b, name);
	if (exist == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		for (int i = exist; i < b->m_Size; i++)
		{
			//����ǰ��
			b->mArr[i] = b->mArr[i + 1];
			cout << "ɾ���ɹ�" << endl;
		}
		b->m_Size--;//����ͨѶ¼�г�Ա��		
	}
	system("pause");
	system("cls");


};
int main()
{
	//�����ṹ�����
	book abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = -1;//�����û��������
	
	while (true)
	{
		//�˵�����
		show_Menu();
		cin >> select;
			switch (select)
			{
			case 1://�����ϵ��
				addMember(&abs);//���õ�ַ���ݿ�������ʵ��
				break;
			case 2://��ʾ��ϵ��
				showMember(&abs);
				break;
			case 3://ɾ����ϵ��
				delMember(&abs);
				break;
			case 4://������ϵ��

				break;
			case 5://�޸���ϵ��

				break;
			case 6://�����ϵ��

				break;
			case 0://�˳�
				cout << "ȷ��Ҫ�˳���" << endl << "1����\t0����" << endl;
				int exit = -1;
				cin >> exit;
				switch (exit)
				{
				case 1:
					system("pause");
					return 0;
					break;
				case 0:
					system("cls");
					break;
				}
				break;



			}
	}
}