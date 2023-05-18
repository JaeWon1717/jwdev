#include<iostream>
#include<algorithm>
using namespace std;
int arr1[1000001] = { 0, };
int arr2[1000001] = { 0, };
int main()
{
	int n, m;
	int num;
	cin >> num;
	
	while (num--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr1[i];
		}
		sort(arr1, arr1 + n);
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> arr2[i];
		}
		for (int i = 0; i < m; i++)
		{
			cout << binary_search(arr1, arr1 + n, arr2[i]) << "\n";
		}
	}

}
