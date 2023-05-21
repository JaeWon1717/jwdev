#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	long n, m;
	cin >> n>>m;
	if (n > m)
		cout << n - m;
	else
		cout<<m - n;
}