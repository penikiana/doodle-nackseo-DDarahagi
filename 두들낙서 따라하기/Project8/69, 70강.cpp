#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*
using namespace std;

class String {
public:
	String() {
		cout << "String() : " << this << endl;
		strData = NULL;
		len = 0;
	}
	String(const char *str) {
		cout << "String(const char*) : " << this << endl;
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);
	}
	String(const String &rhs) {
		cout << "String(const String&) : " << this << endl;
		len = rhs.len;
		alloc(len);
		strcpy(strData, rhs.strData);
	}

	String(String &&rhs)
	{
		cout << "string(string&&) :" << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;
	}//이동 생성자 깊은 복사 두번을 얕은 복사 한번으로 쉽게 처리할 수 있게함.

	~String() {
		cout << "~String() : " << this << endl;
		release();
		strData = NULL;
	}

	String &operator=(const String &rhs) {
		cout << "String &operator=(const String&) : " << this << endl;
		if (this != &rhs) {
			release();
			len = rhs.len;
			alloc(len);
			strcpy(strData, rhs.strData);
		}
		return *this;
	}
	String &operator=(String &&rhs)
	{
		cout << "String &operator=(String&&) :" << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;
		return* this;
	}
	char* GetStrData() const {
		return strData;
	}
	int GetLen() const {
		return len;
	}
	void SetStrData(const char *str) {
		cout << "void SetStrData(const char*) : " << this << ", " << str << endl;
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);
	}

private:
	void alloc(int len) {
		strData = new char[len + 1];
		cout << "strData allocated : " << (void*)strData << endl;
	}
	void release() {
		delete[] strData;
		if (strData) cout << "strData released : " << (void*)strData << endl;
	}

	char *strData;
	int len;
};

String getName() {
	cout << "===== 2 =====" << endl;
	String res("Doodle");
	cout << "===== 3 =====" << endl;
	return res;
}

int main() {
	String a;
	cout << "===== 1 =====" << endl;
	a = getName();
	cout << "===== 4 =====" << endl;

	
	//임시 객체는 r-value. r-value는 등호 오른쪽에 있어야 하는 값들을 이야기함!
	
}
*/