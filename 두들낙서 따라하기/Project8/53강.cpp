#include <iostream>
/*
using namespace std;

int n;
void set();
namespace penikiana
{
	int n;
	void set();
}
namespace google
{
	int n;
	void set();
}

int main()
{
	::set();
	penikiana::set();
	google::set();

	cout << ::n << endl;
	cout << penikiana::n << endl;
	cout << google::n << endl;
}

void set()
{
	n = 10;
}
namespace penikiana
{
	void set()
	{
		n = 20;
	}
}
namespace google
{
	void set()
	{
		n = 30;
	}
}

//�Ҽ��� ������ �ʾƵ� Ư�� ���ӽ����̽��� ���� ������ �Լ��� ��밡��.
//�ٵ� ::�� ���� �Ҽӵ��� ���� n�� ȣ��ȴ�.
//�ٸ� ���ӽ����̽��� �Ҽ��̶�� ������ �Լ��� ȣ��ȵǰ� n�� ȣ��ȴ�.
*/
/*
using namespace std;

int n;
void set()
{
	n = 10;
}
namespace penikiana
{
	int n;
	void set()
	{
		n = 20;
	}
	namespace google
	{
		void set()
		{
			n = 30;
		}
		int n;
	}
	
}

int main()
{
	::set();
	penikiana::set();
	penikiana::google::set();

	cout << ::n << endl;
	cout << penikiana::n << endl;
	cout << penikiana::google::n << endl;
}
//���� ��쿡 30�̶�� ���� ���ӽ����̽� �ȿ� �ִ� �ٸ� n(penikiana�� n)���� �ν�.
//���⼭ penikiana�� n�� ������ ������ void�� n�� 30�� ��.
//�ٵ� �� ���⼭ �� ���� ������ �Ʒ��� ������ �����ϸ� ����� ���� ��.
//�����Ϸ��� ������ �Ʒ��� �����͸� �ν��ϱ� ����
*/