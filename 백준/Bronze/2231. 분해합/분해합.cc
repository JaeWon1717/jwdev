#include <iostream>

using namespace std;

int f(int num)
{
	int sum = num;

	while (num) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main()
{
	int n;
	cin >> n;//n을입력한다.
	for (int i = 1; i<1000001; i++)//n의최대수인 1000001까지하나씩증가시킨다.
	{
		if (f(i) == n)//i를 넣은값이 n이라면 ->동시에 최솟값이되므로 
		{
			cout << i << endl;//i를 출력해버리면 그만 
			return 0;

		}
	}
	cout << "0" << endl;
}



