#include<iostream>

using namespace std;
int dp[14][14];
int comb(int n, int k);
int main(){
	
	int t;
	int n, k;//n층 k호 
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		cout << comb(n, k) << endl;
	}
}
int comb(int n, int k)
{
	if (n == 0)
		return k;
	if (k == 1)
		return 1;

	if (dp[n][k] != 0)
		return dp[n][k];

	
	return dp[n][k] = comb(n - 1, k) + comb(n, k - 1);
}
