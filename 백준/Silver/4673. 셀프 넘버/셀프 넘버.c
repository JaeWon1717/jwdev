#include<stdio.h>
#define N 10001
int arr[N];
int dn(int n) {
	int result = n;
	while (n != 0) {
		result += n % 10;
		n=n/10;
	}
	return result;
}

int main()
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = 1;//배열의 모든값을 1로 만들어놓는다.
	}
	for (int i = 1; i < N; i++) {
		int idx = dn(i);

		if (idx <= N)
		{
			arr[idx] = 0;//1을 넣엇을때 2가 출력되지않는다.dn(i)에 의해 idx가결정된다
		}
	}
		for (int i = 1; i < N; i++)
		{
			if (arr[i] != 0)//arr값이 1인것
				printf("%d\n", i);//의 i번째만출력한다. 
		}
		return 0;
	}
	