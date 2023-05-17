#include <iostream>
#include <cstring>

int main()
{
	using namespace std;

	char roomnum[8];
	int number[10] = { 0 };
	cin >> roomnum;
	for (int i = 0; i < strlen(roomnum); i++)
		number[roomnum[i] - '0']++;
	number[6] += number[9];
	number[6] = (number[6]+1) / 2; // (만약 숫자가 6과 9의 숫자가 3개이면 2개의 세트가 필요하므로)
	number[9] = 0;
	
	int max = 0;
	for (int n = 0; n < 10; n++)
	{
		if (max < number[n])
		{
			max = number[n];
		}
	}
	
	cout << max;

	return 0;
}