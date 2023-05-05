#include<stdio.h>
int main()
{
	int i, n;
	int arr[1000001];
	//int *arr = (int*)malloc(sizeof(int) * 5);
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	for (i = 3; i < 1000001; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= 15746;
	}
	scanf("%d",&n);
	printf("%d", arr[n]);
	return 0;
}