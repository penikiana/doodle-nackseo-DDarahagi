#include <iostream>

using namespace std;

class Base
{
public:
	int a = 10;
	void print()
	{
		cout << "���̽� �����̽�" << endl;
	}
};

class derived :public Base
{
public:
	int a = 20;
	void print()
	{
		cout << "�̰� ����̺����" << endl;
	}
};

class derived2 :public Base
{

};

int main()
{
	Base* b = new derived();
	b->print();

	b = new derived2();
	b->print();

	//b��� ���� ��� base�� ��������->���� ���ε�
	//b�� ��Ȳ������ �ٲ��->���� ���ε�
}
