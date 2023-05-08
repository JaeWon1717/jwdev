#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;
/*
3
3 7
15 7
5 2
*/
int main()
{
	int arr[100][100] = { 0, };
	int a, b;
	int sum = 0;
	int n = 0;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		for (int i = a; i < a + 10; i++)
		{
			for (int j = b; j < b + 10; j++)
			{
				arr[i][j]++;
				if (arr[i][j] < 2)
					sum++;
			}
		}
	
	}
	cout << sum;
 }

