#include<iostream>
#include<string>

using namespace std;
int main()
{
	string S;
	int i, j;
	int alphabet[26] = { 0 };
	int maxindex = -1, max = 0;
	cin >> S;
	//alphabet[i]=인덱스별로 알파벳임
	for (i = 0; i < S.length(); i++)
	{
		if (S[i] < 'a')//대문자
		{
			j = S[i] - 'A';
			alphabet[j]++;
		}
		else
		{
			j = S[i] - 'a';
			alphabet[j]++;
		}
	}
	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] > max)
		{
			max = alphabet[i];
			maxindex = i;
		}	
	}
	alphabet[maxindex]++;
	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] == max)
		{
			cout << "?";
			maxindex = -1;
			break;
		}
	}
	if(maxindex!=-1)
	cout << (char)(maxindex + 'A');
}