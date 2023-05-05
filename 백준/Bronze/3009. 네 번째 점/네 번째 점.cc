#include<iostream>

using namespace std;

int main()
{
	int a1, a2, b1, b2, c1, c2, d1=0, d2 = 0;
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	if (a1 == b1)cout << c1;
	if (a1 == c1) cout << b1;
	if (b1 ==c1)cout << a1;
	cout << " ";
	if (a2 == b2)cout << c2;
	if (a2 == c2)cout << b2;
	if (b2 == c2)cout << a2;
}