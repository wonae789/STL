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


	try {
		cout << v[0] << endl;
		cout << v[3] << endl;
		cout << v[6] << endl;
	}
	catch (out_of_range &e)
	{
		cout << e.what() << endl;
	}


	return 0;
}