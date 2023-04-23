#include<stdio.h>
int hansu(int n);
int main()
{
	int n;
	scanf("%d", &n);
	if (n >= 1 && n <= 99)
{
		printf("%d", n);
	}
	else
   hansu(n);
	
}
int hansu(int n)
{
	int count = 99;
	int one, two, three,i;

	if (n >= 100)
	{
		for (i = 100; i<=n; i++)
		{
			one = i / 100;//100의자리
			two = (i / 10) % 10;//10의자리
			three = (((i % 100)) % 10);//1의자리
			if (one - two == two - three)
			{
				count++;
			}
		}
		printf("%d", count);
	}
	return 0;
}