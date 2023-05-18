#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	char v[8][8];
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> v[i][j];
			
		}
	}
	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i == 0 || i == 2||i==4||i==6)
			{
				if (j % 2 == 0)
				{
					if (v[i][j] == 'F')
						count++;
				}
			}
			if (i == 1 || i == 3 || i == 5 || i == 7)
			{
				if (j % 2 == 1)
				{
					if (v[i][j] == 'F')
						count++;
				}
			}
		}
		
	}
	cout << count++;
}