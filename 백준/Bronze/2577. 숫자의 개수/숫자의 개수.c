#include<stdio.h>
int main()
{
	int a, b, c;
	int num[10] = { 0 };
	int i;
	int total;
	int rest;
	int one, two, three, four, five, six, seven, eight, nine, zero;
	scanf("%d", &a); 
	scanf("%d", &b);
	scanf("%d", &c);
	total = a * b*c;
	while (total > 0)
	{
		rest = total % 10;
		total = total / 10;
		num[rest]++;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", num[i]);
	}
}