#include<stdio.h>
int main()
{
	int left;
	int right;
	int newnum;
	int num;
	int root;
	int newnum2;
	int count = 0;
	scanf("%d",&root);
	num = root;
	do 
	{
		right = num % 10;
		left = num / 10;
		newnum = left + right;
		newnum2 = (right * 10) + (newnum % 10);
		count++;
		num = newnum2;
	} while (num != root);
	printf("%d", count);
	
}