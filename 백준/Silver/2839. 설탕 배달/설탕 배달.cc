#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio; cin.tie(0); cout.tie(0);
	int a, b, n;
	 b = 0;
	int count = 0;
	cin >> n;
	while (n>0)
	{
		if (n % 5 == 0)
		{
			b = n;
			break;
		}
		else
		{
			n = n - 3;
			count++;
		}
		if (n == 0)
		{
			cout << count;
			return 0;
		}
		else if (n < 0)
		{
			cout << "-1";
			return 0;
		}
	}
	cout << b / 5+count;
}