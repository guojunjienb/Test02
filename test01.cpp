#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	for (int i = 0; i <= 10; i++)
	{
		v.push_back(i);
	}
	cout << "打印容器内容" << endl;
	for (int i = 0; i <= 10; i++)
	{
		cout << v[i]<< endl;
	}

	return 0;
}