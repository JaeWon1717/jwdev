#include<stdio.h>

int main()
{
	int num, i,j;
	num = 0;
	scanf("%d",&num);
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			printf("*");		
		}
		printf("\n");
	}
}