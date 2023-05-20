#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n, k, x;
	cin >> n >> k;
	int N[1000] = { 0, };
	for (int i = 0; i < n; i++)
		cin >> N[i];
	sort(N, N + n, greater<int>());
	cout << N[k-1];
}