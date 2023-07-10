#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector< pair< pair<int, int>, pair<int, string> > >s(n);//년 월 일 이름
	
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].second.second >> s[i].second.first >> s[i].first.second >> s[i].first.first;
	}
	sort(s.begin(), s.end());//년 월 일 순 정렬 

	cout << s[n - 1].second.second;//이름
	cout << "\n";
	cout << s[0].second.second;


}
