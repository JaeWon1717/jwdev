#include<iostream>

using namespace std;

int main()
{
	int arr[9] = { 0 };
	int i;
	int max = 0;
	int maxindex=0;
	for (i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}

	for (i = 0; i < 9; i++)
	{		
		if (arr[i] > max)
		{
			max = arr[i];
			maxindex = i;
		}
	}
	
	cout << max << endl;
	cout << maxindex + 1 ;
}