#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool compare(pair<int, int>&a, pair<int, int>&b)
{
	if (a.second != b.second)
		return a.second < b.second;
	else
		return a.first < b.first;
}
int main(void)
{
	int n;
	cin >> n;
	vector<pair<int, int>>point(n);
	for (int i = 0; i < n; i++)
	{
		cin >> point[i].first;
		cin >> point[i].second;
	}
	sort(point.begin(), point.end(), compare);
	for (int i = 0; i < n; i++)
	{
		cout << point[i].first << ' ' << point[i].second << '\n';
	}
	return 0;
}