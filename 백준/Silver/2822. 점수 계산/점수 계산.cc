#include <iostream>
#include <functional>
#include <algorithm>
#include<string>
#include<vector>
using namespace std;


int main() {
	int arr[8] = { 0, };
	int compare[8] = { 0, };
	int com[8] = { 0, };
	int sum = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
		compare[i] = arr[i];
	}
	sort(arr, arr + 8);

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (compare[j] == arr[i])//compare 정렬안된값 , arr 정렬된 값 
			{
				com[i] = j + 1;
				continue;
			}

		}
	}
	for (int i = 7; i > 2; i--)
	{
		sum = sum + arr[i];
	}
	cout << sum << "\n";

	sort(com+3, com + 8);

	for (int i = 3; i < 8; i++)
		cout << com[i] << " ";
	cout << "\n";
	


}

