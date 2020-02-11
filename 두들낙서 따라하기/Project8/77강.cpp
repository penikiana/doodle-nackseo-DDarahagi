#include <iostream>

using namespace std;

class Base
{
public:
	int a = 10;
	void print()
	{
		cout << "베이스 베베이스" << endl;
	}
};

class derived :public Base
{
public:
	int a = 20;
	void print()
	{
		cout << "이게 디라이브던가" << endl;
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

	//b라는 놈은 고냥 base라 생각하자->정적 바인딩
	//b가 상황에따라 바뀐다->동적 바인딩
}
