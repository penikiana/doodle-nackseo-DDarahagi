#include <iostream>
/*
using namespace std;

class Base
{
public:
	void bfunc()
	{
		cout << "Hello!" << endl;
	}

	int bnum;
};

class dervied :public Base
{
public:
	void dfunc()
	{
		cout << "�ȳ�?" << endl;
	}

	int dnum;
};

int main()
{
	Base b;
	dervied d;

	b.bfunc();
	b.bnum = 1;

	d.bfunc();
	d.bnum = 2;
	d.dfunc();
	d.dnum = 3;
}
*/

//public		: �ܺ�, �ڽ� Ŭ���� ����
//protected		:�ܺ����� �Ұ�, �ڽ� Ŭ���� ����
//private		:�ܺ�����, �ڽ� Ŭ���� �Ұ���
/*
using namespace std;

class base
{
public:
	int bpublic;

protected:
	int bprotected;

private:
	int bprivate;
};

class derived :public base
{
public:
	int dpublic;

	int dfunc()
	{
		bpublic = 1;
		bprotected = 2;
		bprivate = 3;
		dpublic = 4;
		dprivate = 5;
	}
	
private:
	int dprivate;
};

int main()
{
	base b;
	derived d;

	b.bpublic = 1;
	b.protected = 2;


	d.bpublic = 1;
	d.dpublic = 2;
	d.dfunc = 3;
}
*/