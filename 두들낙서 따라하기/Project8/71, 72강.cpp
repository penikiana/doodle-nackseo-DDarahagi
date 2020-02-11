#include <iostream>
#include <string>

using namespace std;

class item
{
public:
	item(int num):num(num)		//��ȯ ������
		{
		cout << "item(int)" << endl;
		}
	item(string name):name(name)		//�굵
		{
		cout << "item(string)" << endl;
		}
	item(int num, string name):num(num),name(name)
		{
		cout << "item(int, string)" << endl;
		}

	operator int() const		//int���� ����ȯ ������ �����ε�
	{
		return num;
	}

	operator string() const		//string������ ����ȯ ������ �����ε�
	{
		return to_string(num) + ":" + name;
		
	}

	void print()
	{
		cout << num << ":" << name << endl;
	}

private:
	int num;
	string name;
};

void println(string s)
{
	cout << s << endl;
}

void println(int n)
{
	cout << n << endl;
}

int main()
{
	item i1 = item(1);
	item i2(2);
	item i3 = 3;
	i3 = 3;		//������ ��ȯ
	item i4 = (item)4;	//����� ��ȯ

	item i5(5);
	i5 = string("stone");

	item i6(1, "grass");
	item i7 = { 2,"dirt" };
	i7 = { 2,"dirt" };
	item i8{ 3, "wood" };

	i1.print();
	i2.print();
	i3.print();
	i4.print();
	i5.print();
	i6.print();
	i7.print();
	i8.print();

	int itemnum1 = (int)i8;
	int itemnum2 = i7;
	cout << itemnum1 << endl;
	cout << itemnum2 << endl;

	string itemname = (string)i7;
	
	println((string)i8);	//����� ����ȯ
	println((int)i8);		
}