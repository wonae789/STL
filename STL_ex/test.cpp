#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }
};

class Pointptr
{
	Point *ptr;
public:
	Pointptr(Point* p) :ptr(p){}
	~Pointptr()
	{

	}

};


int main()
{


	return 0;
}