#include<stdio.h>

int main()
{
	long long f1, f2, f3;
	int i=1;
	int n;
	f2 = 1;
	f3 = 0;
	f1 = 0;
	scanf("%d",&n);
	
	
		while (i < n)
		{
		f1 = f2 + f3;
			f3 = f2;
			f2 = f1;
			/*f3 = f2;
				f2 += f1;
				f1 = f3;*/
			i++;
		}
	
	
	printf("%lld\n", f2);
	return 0;
}