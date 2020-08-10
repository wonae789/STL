#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter;

	iter = find(v.begin(), v.end(), 30);
	cout << *iter << endl;

	cout << endl;
	cout << endl;
	cout << endl;


	for(iter = v.begin();iter!=v.end();++iter)
		cout << *iter<< endl;


	vector<int>::iterator iter2 = v.begin();

	cout << iter2[1] << endl;

	return 0;
}