#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	int count = 0;
	int a = 0;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	vector<string> v1(n+m);
	vector<string> v3(500000);
	
	
	for (int i = 0; i < n + m; i++)
	{
		cin >> v1[i];
	}
	sort(v1.begin(),v1.end());

	for (int i = 0; i < m + n-1; i++)
	{
		if (v1[i] == v1[i + 1])
		{
			count++;
			v3[a] = v1[i];
			a++;
		}
	}
	//vector<string>v3(a);
	cout << count << "\n";
	for (int i = 0; i <= a; i++)
		cout << v3[i] << "\n";


}