#include <iostream>
#define MAX 31
using namespace std;
long long comb[MAX][MAX];
long long combination(int n, int r);
int main()
{
	int a, b;
	int t;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		cout << combination(b, a)<<"\n";
		//cout << combination(b, a);
	}
	return 0;
}
long long combination(int n, int r)
{
	for (int i = 1; i <= 30; i++)
	{
		comb[i][i] = 1;
		comb[i][1] = i;
	}
	for (int i = 2 ; i <= 30; i++)
	{
		for (int j = 2; j <= 30; j++)
		{
			if (i > j)
				comb[i][j] = comb[i - 1][j - 1] + comb[i - 1][j];
		}
	}
	return comb[n][r];
}