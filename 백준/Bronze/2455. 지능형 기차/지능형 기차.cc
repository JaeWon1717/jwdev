#include<iostream>

using namespace std;

int main()
{
	int a1, a2, a3, a4, a5, a6, a7, a8;
	cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8;
	int max = 0;
	int sum1, sum2, sum3;
	sum1 = a2 + a4 - a3;
	sum2 = sum1 - a5 + a6;
	sum3 = sum2 - a7 + a8;
	if (sum1 >= sum2)
		max = sum1;
	else
		max = sum2;
	if (max >= sum3)
		max = max;
	else
		max = sum3;

	cout << max;
}