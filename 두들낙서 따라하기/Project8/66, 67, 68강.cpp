#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*
int main()
{
	int* a = new int(5);
	int* b = new int(3);

	a = b;		//얕은 복사(참조만 복사)
	*a = *b;	//깊은 복사(값을 복사)

	delete a;
	delete b;

	//이러면 a와 b가 가리키는 주소값이 같아져 5라는 값에 접근할 수단이 사라짐.
	//현 상태는 런타임 에러.
	//*a=*b로 바꾸자.
}
*/
/*
using namespace std;

class String
{
public:
	String()
	{
		cout << "string()생성자 호출" << endl;
		strdata = NULL;
		len = 0;
	}

	String(const char* str) 
	{
		cout << "string(const char*)생성자 호출" << endl;
		len = strlen(str);
		strdata = new char[len + 1];				//null문자 고려!
		cout << "strdata 할당 :" << (void*)strdata << endl;
		strcpy(strdata, str);						//깊은 복사
	}
	String(const String &rhs)
	{
		cout << "String(string &rhs)생성자 호출" << endl;
		strdata = new char[rhs.len + 1];			//null문자 고려!
		cout << "strdata 할당 :" << (void*)strdata << endl;
		strcpy(strdata, rhs.strdata);				//깊은 복사
		len = rhs.len;		//깊은복사

	}
	~String()
	{
		cout << "~string() 소멸자 호출"<<endl;
		delete[] strdata;
		cout << "strdata 해제됨 :" << (void*)strdata << endl;
		strdata = NULL;
	}

	String &operator=(const String &rhs)
	{
		if (this == &rhs) {
			delete[] strdata;
			strdata = new char[rhs.len + 1];
			cout << "strdata 할당 :" << (void*)strdata << endl;
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
	String s1("안녕");
	String s2(s1);
	String s3("hello");
	
	s3 = s1;

	//등호도 연산으로 취급됨!

	cout << s1.getstrdata() << endl;
	cout << s2.getstrdata() << endl;
	cout << s3.getstrdata() << endl;
}
*/