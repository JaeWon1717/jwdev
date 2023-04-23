#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int i, j;
	int data[10] = { 0 };
	cin >> N;
	while (N)
	{
		data[N % 10]++;
		N /= 10;
	}
	for(i=9;i>=0;i--)
		if (data[i] != 0)
		{
			for (j = 0; j < data[i]; j++)
			{
				cout << i;
			}
		}
}



