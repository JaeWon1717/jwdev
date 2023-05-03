/*/문제
2차원 평면 위의 점 N개가 주어진다. 좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.
sort(v.begin(), v.end(), less<자료형>());
입력
첫째 줄에 점의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N개의 줄에는 i번점의 위치 xi와 yi가 주어진다. (-100,000 ≤ xi, yi ≤ 100,000) 좌표는 항상 정수이고, 위치가 같은 두 점은 없다.*/
#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	pair<int, int> arr[100000];//배열을 따로초기화시키지않는다
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i].first>>arr[i].second;//
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
	
	return 0;
}
		
	