#include<stdio.h>

int main()
{
	int res, count = 1;
	int n;
	scanf("%d", &res);
	while (res > 1)
	{
		n = res % 2;
		res = res / 2;
		if (n == 1)
			count++;		
	}
	printf("%d", count);
}