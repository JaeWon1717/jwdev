#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int p[1000] = { 0, };
	int n;
	int pi = 0;
	int m = 0;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> pi;
		p[i] = pi;
	}
	sort(p, p + n);
	m = n;
	for (int i = 0; i < n; i++)
	{
		sum += p[i] * m;
		m--;
	}
	cout << sum;
}


