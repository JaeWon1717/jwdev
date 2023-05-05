#include<iostream>
#include<queue>

using namespace std;

int main()
{
	
	int n, k;
	cin >> n >> k;
	queue<int>q;
	cout << "<";
	for (int i = 1; i <= n; i++)
		q.push(i);	
	for (int i = 1; i <=n; i++)
	{
	
			for (int j = 0; j < k-1; j++)
			{
				q.push(q.front());
				q.pop();
			}
			if (q.size() > 1)
				cout << q.front() << ", ";
			else 
				cout << q.front() << "";
			q.pop();
	}
	cout << ">";
}