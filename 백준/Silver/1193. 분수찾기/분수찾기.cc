#include<iostream>

using namespace std;

int main()
{
	int x, n;
	int sum = 0;
	int i;
	int t;
	int a, b;
	cin >> t;
	if (t == 1)
	{
		cout << "1/1";
		return 0;
	}
	for (x = 1; x < 100000; x++)
	{
		sum += x;
		if (sum >= t)
		{				
			if (x % 2 == 0)
			{		
				a = 1;
				b = x;
			
				cout << b - (sum - t) << "/" << a + (sum - t);
				break;			
			}
			else
			{
				a = x;
				b = 1;
		
				cout << b + (sum - t) << "/" << a - (sum - t);
				break;
			}
		}	
	}

}