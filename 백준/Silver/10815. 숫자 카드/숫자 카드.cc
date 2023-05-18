#include<iostream>
#include<algorithm>
using namespace std;

int arr1[500002] = { 0, };
int arr2[500002] = { 0, };

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin>>arr1[i];
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
	}
	sort(arr1, arr1 + n);
	for (int i = 0; i < m; i++)
	{
		cout << binary_search(arr1, arr1 + n, arr2[i]) << " ";
	}
}