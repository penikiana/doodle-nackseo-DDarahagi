#include <iostream>
/*
using namespace std;

class myclass {

public:
	myclass()//생성자
	{
		cout << "생성자가 나타났다!" << endl;
	}
	~myclass()//소멸자
	{
		cout << "소멸자가 나타났다!" << endl;
	}
};

myclass globalobj;

void testlocalobj()
{
	cout << "테스트로컬오브젝트함수 시작" << endl;
	myclass localobj;
	cout << "테스트로컬오브젝트함수 끝" << endl;
}

int main()
{
	cout << "main시작!" << endl;
	testlocalobj();
	cout << "main 끝!" << endl;
}
*/
/*
using namespace std;

class complex
{
public:
	complex()
	{
		real = 0;
		imag = 0;
	}

	complex(double real_ , double imag_)
	{
		real = real_;
		imag = imag_;
	}

	double getreal()
	{
		return real;
	}
	void setreal(double real_)
	{
		real = real_;
	}
	double getimag()
	{
		return imag;
	}
	void setimag(double imag_)
	{
		imag = imag_;
	}
private:
	double real;
	double imag;
};

int main()
{
	complex c1;
	complex c2 = complex(2, 3);
	complex c3(2, 3);

	cout << "c1= " << c1.getreal() << "," << c1.getimag() << endl;
	cout << "c2= " << c2.getreal() << "," << c2.getimag() << endl;
	cout << "c3= " << c3.getreal() << "," << c3.getimag() << endl;

}
//생성자 호출은 중괄호로 초기화도 가능.

*/