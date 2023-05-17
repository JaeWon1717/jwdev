#include <iostream>
#include <algorithm>
using namespace std;
int arr[500002];
int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int m;
	int card;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		//cin >> card;
	//	arr[i] = card;
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> card;
		cout << upper_bound(arr, arr + n, card) - lower_bound(arr, arr + n, card) << " ";
	}
}