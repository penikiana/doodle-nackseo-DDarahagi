#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*
int main()
{
	int* a = new int(5);
	int* b = new int(3);

	a = b;		//���� ����(������ ����)
	*a = *b;	//���� ����(���� ����)

	delete a;
	delete b;

	//�̷��� a�� b�� ����Ű�� �ּҰ��� ������ 5��� ���� ������ ������ �����.
	//�� ���´� ��Ÿ�� ����.
	//*a=*b�� �ٲ���.
}
*/
/*
using namespace std;

class String
{
public:
	String()
	{
		cout << "string()������ ȣ��" << endl;
		strdata = NULL;
		len = 0;
	}

	String(const char* str) 
	{
		cout << "string(const char*)������ ȣ��" << endl;
		len = strlen(str);
		strdata = new char[len + 1];				//null���� ���!
		cout << "strdata �Ҵ� :" << (void*)strdata << endl;
		strcpy(strdata, str);						//���� ����
	}
	String(const String &rhs)
	{
		cout << "String(string &rhs)������ ȣ��" << endl;
		strdata = new char[rhs.len + 1];			//null���� ���!
		cout << "strdata �Ҵ� :" << (void*)strdata << endl;
		strcpy(strdata, rhs.strdata);				//���� ����
		len = rhs.len;		//��������

	}
	~String()
	{
		cout << "~string() �Ҹ��� ȣ��"<<endl;
		delete[] strdata;
		cout << "strdata ������ :" << (void*)strdata << endl;
		strdata = NULL;
	}

	String &operator=(const String &rhs)
	{
		if (this == &rhs) {
			delete[] strdata;
			strdata = new char[rhs.len + 1];
			cout << "strdata �Ҵ� :" << (void*)strdata << endl;
			strcpy(strdata, rhs.strdata);
			len = rhs.len;

			return*this;
		}
	}

	char* getstrdata()const
	{
		return strdata;
	}

	int getlen() const
	{
		return len;
	}

private:
	char* strdata;
	int len;
};

int main()
{
	String s1("�ȳ�");
	String s2(s1);
	String s3("hello");
	
	s3 = s1;

	//��ȣ�� �������� ��޵�!

	cout << s1.getstrdata() << endl;
	cout << s2.getstrdata() << endl;
	cout << s3.getstrdata() << endl;
}
*/