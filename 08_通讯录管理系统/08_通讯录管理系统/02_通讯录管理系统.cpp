#include<iostream>
using namespace std;
#include<string>
#define MAX 1000 //最大人数

//- 封装函数显示界面
//- main中调用界面函数

//函数界面
void show_Menu()
{
	cout << "\t" << "1、添加联系人" << endl;
	cout << "\t" << "2、显示联系人" << endl;
	cout << "\t" << "3、删除联系人" << endl;
	cout << "\t" << "4、查找联系人" << endl;
	cout << "\t" << "5、修改联系人" << endl;
	cout << "\t" << "6、清空联系人" << endl;
	cout << "\t" << "0、退出" << endl;
}
//联系人结构体
struct member
{
	string name;
	int gender;//性别：1男 2女
	int age;
	string phone;
};
//设计通讯录结构体
struct book
{
	//联系人数组，末尾预留一个空数组用来数组前移
	struct member mArr[MAX+1];
	//通讯录中当前人数
	int m_Size;
};
//1、添加联系人函数
void addMember(book * b)
{
	//判断通讯录是否已满，满了不再添加
	if (b->m_Size == MAX)
	{
		cout << "通讯录已满" << endl;
		return;
	}
	else
	{
		//添加联系人
		//姓名
		string name;
		cout << "输入姓名" << endl;
		cin >> name;
		b->mArr[b->m_Size].name = name;
		//年龄
		int age;
		cout << "输入年龄" << endl;
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
				cout << "输入有效年龄" << endl;
			}						
		}
		//性别
		//1--男 2--女
		int gender = 0;
		cout << "输入性别\t1--男\t2--女" << endl;
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
				cout << "输入字符不合规，重新输入" << endl;
			}
		}		
		//电话
		string phone;
		cout << "输入电话" << endl;
		cin >> phone;
		b->mArr[b->m_Size].phone = phone;
	}
	cout << "添加成功" << endl;
	//更新通讯录人数
	b->m_Size++;
	system("pause");//请按任意键继续
	system("cls");//清屏
}
//2、显示联系人
void showMember(book* b)
{
	if (b->m_Size == 0)
	{
		cout << "联系人列表为空" << endl;
		system("pause"); 
		system("cls");
	}
	else
	{
		for (int i = 0; i < b->m_Size; i++)
		{
			cout << i + 1 << "、姓名" << b->mArr[i].name << "   性别：" << (b->mArr[i].gender == 1 ? "男" : "女")
				<< "   年龄：" << b->mArr[i].age << "   电话：" << b->mArr[i].phone << endl;
				/*<< "   性别：";
			if (b->mArr[i].gender == 1)
			{
				cout << "男";
			}
			else
			{
				cout << "女";
			}
			cout << "   年龄：" << b->mArr[i].age << "   电话：" << b->mArr[i].phone << endl;*/
		}
		system("pause");
		system("cls");
	}
}

//封装检测输入联系人是否存在
//检测联系人是否存在，存在返回位置，不存在返回-1
//参数1 通讯录 参数2 查找姓名
int ifExist(book* b, string name)
{
	for (int i = 0; i < b->m_Size; i++)
	{
		//找到查找姓名
		if (b->mArr[i].name == name)
		{
			return i;
		}
	}
	return -1;//遍历结束没有找到
}

//封装删除联系人函数
//3、删除联系人
void delMember(book* b)
{
	cout << "输入删除联系人" << endl;
	string name;
	cin >> name;
	int exist = ifExist(b, name);
	if (exist == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		for (int i = exist; i < b->m_Size; i++)
		{
			//数据前移
			b->mArr[i] = b->mArr[i + 1];
			cout << "删除成功" << endl;
		}
		b->m_Size--;//更新通讯录中成员数		
	}
	system("pause");
	system("cls");


};
int main()
{
	//创建结构体变量
	book abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	int select = -1;//创建用户输入变量
	
	while (true)
	{
		//菜单调用
		show_Menu();
		cin >> select;
			switch (select)
			{
			case 1://添加联系人
				addMember(&abs);//利用地址传递可以修饰实参
				break;
			case 2://显示联系人
				showMember(&abs);
				break;
			case 3://删除联系人
				delMember(&abs);
				break;
			case 4://查找联系人

				break;
			case 5://修改联系人

				break;
			case 6://清空联系人

				break;
			case 0://退出
				cout << "确定要退出？" << endl << "1、是\t0、否" << endl;
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