#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int x, y, w, h;	
	int edge;
	cin >> x;
	cin >> y;
	cin >> w;
	cin >> h;	
	edge=min(w-x, x);
	edge = min(edge, h - y);
	edge = min(edge, y);
	cout << edge;

	return 0;
}