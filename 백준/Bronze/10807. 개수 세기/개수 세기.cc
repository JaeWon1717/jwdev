#include<iostream>
#include<vector>

using namespace std;
int main()
{
	int count = 0;
	int N = 0;
	int k = 0;
	cin >> N;
		vector<int>v(N);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	//for (int i = 0; i < N; i++)
	//{
	//	cout << v[i] << " ";
	//}
	cin >> k;
	for (int i = 0; i < N; i++)
	{
		if (v[i] == k)
			count++;
	}
	cout << count;
}