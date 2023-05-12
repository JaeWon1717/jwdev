#include<iostream>

using namespace std;

int main()
{
	int num = 0;
	int a,b;
	a = 0;
	b = 0;
	cin >> num;
	

	if (num == 1)
	{
		cout << "1";
	}
	else {
		for (b = 0; a+ 1 < num; b++)
		{
			a += 6 + 6 * b;
		}
		cout << b+1;
	}
}