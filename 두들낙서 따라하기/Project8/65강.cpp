#include <iostream>

/*
using namespace std;

int main()
{
	int* a = new int(5);

	cout << a << endl;
	cout << *a << endl;

	*a = 10;

	cout << a << endl;
	cout << *a << endl;

	delete a;
}
*/

/*
using namespace std;

int main()
{
	int* arr;
	int len;

	cout << "배열의 길이 :";
	cin >> len;

	arr = new int[len];

	for (int i = 0; i < len; i++)
	{
		arr[i] = len -i;
	}
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;
}
*/
/*
using namespace std;

class vector2
{
public:
	vector2() :x(0), y(0)
	{
		cout << this << " : vector2()" << endl;
	}
	vector2(const float x, const float y) :x(x), y(y)
	{
		cout << this << ": vector2(const x, const float y)" << endl;
	}

	~vector2()
	{
		cout << this << " : ~vector2()" << endl;
	}

	float getx() const { return x; }
	float gety() const { return y; }

private:
	float x;
	float y;
};

int main()
{
	vector2 s1 = vector2();
	vector2 s2 = vector2(3, 2);

	vector2* d1 = new vector2();
	vector2* d2 = new vector2(3, 2);

	cout << "(" << (*d1).getx() << ", " << (*d1).gety << ")"<< endl;
	cout << "(" << (*d2).getx() << ", " << (*d2).gety << ")" << endl;

	delete d1;
	delete d2;


}
*/