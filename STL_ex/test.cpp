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
		delete ptr;
	}

	Point* operator->() const
	{
		return ptr;
	}
	Point& operator*() const
	{
		return *ptr;
	}
};



int main()
{
	Point* p1 = new Point(2, 3);
	Pointptr p2 = new Point(5, 5);

	p1->Print();
	p2->Print();
	cout << endl;

	(*p1).Print();
	(*p2).Print();

	delete p1;

	return 0;
}