#include <iostream>
/*
using namespace std;

class vector2
{
public:
	vector2();
	vector2(float x, float y);

	float getx() const;
	float gety() const;

	vector2 operator+(const vector2 rhs) const;
	vector2 operator-(const vector2 rhs) const;
	vector2 operator*(const float rhs) const;
	vector2 operator/(const float rhs) const;
	float operator*(const vector2 rhs) const;


private:
	float x;
	float y;
};

vector2 operator*(const float a, const vector2 b)
{
	return vector2(a*b.getx(), a*b.gety());
}


int main()
{
	vector2 a(2, 3);
	vector2 b(-1, 4);
	vector2 c1 = a - b;
	vector2 c2 = a * 1.6;
	vector2 c3 = 1.6 * a;
	float c4 = a * b;

	cout << a.getx() << ", " << a.gety() << endl;
	cout << b.getx() << ", " << b.gety() << endl;
	cout << c1.getx() << ", " << c1.gety() << endl;
	cout << c2.getx() << ", " << c2.gety() << endl;
	cout << c3.getx() << ", " << c3.gety() << endl;
	cout << c4 << endl;
}

vector2::vector2() : x(0), y(0) {}
vector2::vector2(float x, float y) : x(x), y(y) {}

float vector2::getx() const { return x; }
float vector2::gety() const { return y; }

vector2 vector2::operator+(const vector2 rhs)const
{
return vector2(x + rhs.x, y + rhs.y);
}

vector2 vector2::operator-(const vector2 rhs)const
{
	return vector2(x - rhs.x, y - rhs.y);
}

vector2 vector2::operator*(const float rhs)const
{
	return vector2(x*rhs, y * rhs);
}

vector2 vector2::operator/(const float rhs)const
{
	return vector2(x/rhs, y / rhs);
}

float vector2::operator*(const vector2 rhs)const
{
	return x * rhs.x + y * rhs.y;
}
*/