#include <iostream>
#include <string>

/*
using namespace std;
int main()
{
	string name;
	int score;

	cout << "이름입력:";
	cin >> name;

	cout << "점수 입력: ";
	cin >> score;

	cout << "당신의 이름은 " << name << "당신의 점수는 " << score <<"점"<< endl;
} 
*/

/*

using namespace std;

int main()
{
	int arr[2][3] = { {1,2,3,},{4,5,6,} };
	{
		for (int(&ln)[3] : arr)
		{
			for (int &col : ln)
			{
				cout << col << ' ';
			}
			cout << endl;
		}
	}

	for (int(*ln)[3] = arr; ln < arr + 2; ln++)
	{
		for (int*c = *ln; c < *ln + 3; c++)
		{
			cout << *c << ' ';
		}
		cout << endl;
	}
}
*/
/*
void drawRectangle(int l, int r, int t, int b)
{

}
void drawRectangle(int w, int h, int x = 0, int y = 0)
{

}

int main()
{
	drawRectangle(0, 0, 0, 0);
}
//초기화하려면 오른쪽부터, 변수의 개수가 같으면 오버로딩이 안됨.
*/
