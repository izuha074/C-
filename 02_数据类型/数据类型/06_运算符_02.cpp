#include<iostream>
using namespace std;

int main()
{
	//�Ƚ������
	int a = 10, b = 20;
	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a < b) << endl;
	cout << (a <= b) << endl;
	cout << (a > b) << endl;
	cout << (a >= b) << "\n�Ƚ������end" << endl;

	//�߼������ ��
	a = 10;
	cout << !a << endl; //C++�г���0��Ϊ��
	cout << !!a << "\n��end" << endl;
	// �߼� ��  ��Ϊ������Ϊ��
	a = 10, b = 10;
	cout << (a && b) << endl;
	a = 0, b = 10;
	cout << (a && b) << "\n��end" << endl;
	// �߼� ��
	a = 10, b = 10;
	cout << (a || b) << endl;
	a = 0, b = 10;
	cout << (a || b) << endl;
	a = 0, b = 0;
	cout << (a || b) << "\n��end" << endl;

		system("pause");

	return 0;
}