#include <iostream>
#include <string>


/*
using namespace std;

int main()
{
	int a(10);
	int b(a+9);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
*/


/*
//������� for��

using namespace std;

int main()
{
	int arr[10] = { 3,1,4,5,2,6,9,7,8 };

	for (int &n : arr)
	{
		cout << n << ' ';
		n++;
	}
	cout << endl;
	for (int n : arr) 
	{
		cout << n << ' ';
	}
	cout << endl;
}
*/

/*
//c++������

using namespace std;

int main()
{
	int a(5);
	int &p = a;
	p = 10;

	cout << p << endl;
	cout << a << endl;
}
*/

/*
//�� ������ ġȯ�ϱ�
using namespace std;

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a(5), b(7);

	swap(a, b);
	
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
*/


/*
using namespace std;

int main()
{
	// r-value
	int a(5);
	int &&r = 3;
	int &&r1 = a * a;
}
*/
