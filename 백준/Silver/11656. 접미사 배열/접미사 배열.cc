#include <iostream>
#include <functional>
#include <algorithm>
#include<string>
#include<vector>
using namespace std;


int main() {
	string v1;
	string temp[1000];
	cin >> v1;
	int l;
	l = v1.length();
	for (int i = 0; i < l; i++)
	{
		temp[i] = v1.substr(i, i + l);
	}
	sort(temp, temp + l);
	for (int i = 0; i < l; i++)
	{
		cout << temp[i] << "\n";
	}

	
	return 0;
}

