#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int n = 30;
	int count = 0;
	int arr[32] = { 0, };
	int value;
	//
	//for (int i = 0; i < 30; i++)
	//{
	//	arr[i] = i;
	//}
	for (int i = 0; i < 28; i++)
	{
		cin >> value;
		arr[value-1] = 1;
	}
	//arr[0] = 1;
	for (int i = 0; i < 30; i++)
	{
		if (arr[i] != 1)
			cout <<i+1<<"\n";
	}
}


