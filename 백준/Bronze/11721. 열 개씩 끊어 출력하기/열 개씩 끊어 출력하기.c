#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

	char str[100] = "";
	int count = 0;
	int i;
	int len;
	scanf("%s", str);
	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a'&&str[i] <= 'z' || str[i] >= 'A'&&str[i] <= 'Z')
			count++;
		printf("%c", str[i]);
		if (count % 10 == 0)
		{
			printf("\n");
		}
		else if (str[i] = '\0')
			break;
	}

}


