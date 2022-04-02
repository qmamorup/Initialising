
#include <iostream>

class Vector 
{
public:
	Vector() : x(0), y(0), z(0)
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	void Show() 
	{
		std::cout << '\n' << x << ' ' << y << ' ' << z;
	}
private:
	double x;
	double y;
	double z;
};

int main() 
{
	Vector v(10, 10, 10);
	v.Show();
}