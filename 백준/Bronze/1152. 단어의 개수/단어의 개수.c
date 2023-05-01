#include<stdio.h>
int main()
{
	int i = 0;
	int count = 1;
	char str[1000000];
	gets(str);
	int k = strlen(str);

	for (i = 0; i< k - 1; i++)
	{
		if (str[i] == ' ')
			count++;
	}
	if (str[0] == ' '||str[k]==' ')
		count = count - 1;
	printf("%d\n", count);
}
