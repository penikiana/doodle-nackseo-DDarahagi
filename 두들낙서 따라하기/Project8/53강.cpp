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

//소속을 밝히지 않아도 특정 네임스페이스에 속한 변수나 함수를 사용가능.
//근데 ::만 쓰면 소속되지 않은 n이 호출된다.
//다른 네임스페이스의 소속이라고 밝히면 함수는 호출안되고 n이 호출된다.
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
//위의 경우에 30이라는 값은 네임스페이스 안에 있는 다른 n(penikiana의 n)으로 인식.
//여기서 penikiana의 n도 밑으로 내리면 void의 n만 30이 됨.
//근데 또 여기서 맨 위의 방법대로 아래로 빼내서 선언하면 제대로 값이 들어감.
//컴파일러가 위에서 아래로 데이터를 인식하기 때문
*/