#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int> s;

	s.insert(50);
	s.insert(20);
	s.insert(60);
	s.insert(70);
	s.insert(10);
	s.insert(30);

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << endl;

	s.insert(50);
	for (iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << endl;
	return 0;
}