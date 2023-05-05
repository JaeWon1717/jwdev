#include<iostream>
#include<stdio.h>
#include<vector>
#include<stdlib.h>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	string a;
	string b;
	cin >> a;
	b = a;
	reverse(a.begin(), a.end());
	if (a == b)
		cout << "1";
	else cout << "0";

}
