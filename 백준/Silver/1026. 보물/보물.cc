#include<iostream>
#include<algorithm>
using namespace std;
void Print(int *arr,int *brr,int testcase)
{
	int i;
	
	int sum = 0;
	for (i = 0; i < testcase; i++)
	{
		sum+=arr[i] * brr[testcase-1- i];
	}

	cout <<sum<<endl;
}
int main()
{	
	int i;
	int testcase = 0;
	int arr[50],brr[50];
	cin >> testcase;
	for (i = 0; i < testcase; i++)
	{
		cin >> arr[i];
	}
	for (i = 0; i < testcase; i++)
	{
		cin >> brr[i];
	}
	sort(arr, arr + testcase);
	sort(brr, brr + testcase);
	Print(arr,brr,testcase);

	
}