#include <iostream>
#include <functional>
#include <algorithm>
#include<string>
#include<vector>
using namespace std;
//대표값 중앙값 

int main() {
	
	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + 5);

	cout << sum / 5 << "\n";
	cout << arr[2];

		return 0;
}
