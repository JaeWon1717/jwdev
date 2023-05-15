#include <iostream>
#include <functional>
#include <algorithm>
#include<string>
#include<vector>
using namespace std;


int main() {
	int n;
	cin >> n;
	int arr[100000] = { 0, };
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != arr[i - 1])
			cout << arr[i] << " ";
	}
}

