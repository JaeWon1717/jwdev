#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int arr[101];
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int num;
		int sum = 0;
		cin >> num;
		for (int i = 0; i < num; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		cout << sum << "\n";
	}
}