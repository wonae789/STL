#include <iostream>
using namespace std;

template<typename T>
void Print(T a, T b)
{
	cout << a << " , " << b << endl;
}


int main()
{

	Print(10, 20);
	Print(10.5, 20.5);
	Print("asdf", "ejejej");
	return 0;
}