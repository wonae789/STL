#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> dq;

	for (deque<int>::size_type i = 0; i < 10; ++i)
	{
		dq.push_back((i + 1) * 10);
	}

	deque<int>::iterator iter;
	deque<int>::iterator iter2;

	for (iter = dq.begin() ; iter != dq.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;
	cout << dq[0] << ' ' << dq[1] << ' ' << dq[2] << endl;

	cout << endl;

	iter = dq.begin() + 2;
	iter2 = dq.insert(iter, 500);
	cout << *iter2 << endl;

	cout << endl;

	for (iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	cout << dq[0]<< ' '<< dq[1]<< ' '<<dq[2] << endl;

	//for (int i = 0; i<dq.size(); ++i)
	//	cout << dq[i] << " ";
	//cout << endl;

	return 0;
}