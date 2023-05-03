#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
bool cmp(pair<int, int>a, pair<int, int>b)
{
	if (a.second != b.second)
		return a.second < b.second;//y좌표가 다르다면 뒤값이 크게정렬
	else
		return a.first < b.first;//y좌표가 같다면 x가 크게정렬 
}
int main()
{
	int n = 0;
	int x, y;
	cin >> n;
	vector<pair<int, int> >v;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(),v.end(),cmp);
	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
}
		
	