#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

int main()
{
	int n = 0;
	int value = 0;
	int sum = 0;
	stack<int>stack;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> value;
		if (value == 0)
		{
			stack.pop();
		}
		else
		stack.push(value);
	}
	
	while (!stack.empty())
	{
		sum+=stack.top();
		stack.pop();
	}
	cout << sum;
	

}
		
	