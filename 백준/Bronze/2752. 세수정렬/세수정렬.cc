#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
	vector<int>v;
	for (int i = 0; i < 3; i++)
	{
		v.push_back(i);
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 3; i++)
	{
		cout << v[i]<<" ";
	}
}
