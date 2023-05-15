#include <iostream>
#include <functional>
#include <algorithm>
#include<string>
#include<vector>
using namespace std;


int main() {
	int n;
	string v;
	int l;
	cin >> n;
	while (n--)
	{
		cin >> v;
		l=v.size();
		cout << v[0] << v[l-1] << "\n";
	}

	return 0;
}

