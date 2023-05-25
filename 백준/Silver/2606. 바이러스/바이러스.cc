#include<iostream>
#include<algorithm>
using namespace std;
const int MAX =101;
int arr[MAX][MAX];
int cnt = -1;//전역함수로 선언
bool visited[MAX];
int num, n;
void dfs(int x)
{
	visited[x] = true;//방문했으면 true , 시작이 dfs(1)로 하니 true로 시작 , 이후 방문한적이없는 노드는 true가 아니므로 
	cnt++;//방문한 적이있어서 dfs로 재귀함수로 넘어온것이니 
	for (int i = 1; i <= num; i++)
	{
		if (!visited[i] && arr[x][i])//i값에대해 방문한 적이없고 , 경로가 있는 상태면
			dfs(i);//i값을 dfs에 넣는다. 
	}
}
int main()
{
	ios_base::sync_with_stdio; cin.tie(0); cout.tie(0);
	
	int a, b;
	cin >> num >> n; // 총 컴퓨터 개수 num , 연결되어있는 수 n
	for (int  i=0; i < n; i++)
	{
		cin >> a >> b;
		arr[a][b] = 1;//무방향 그래프니 양쪽 1 
		arr[b][a] = 1;
	}
	dfs(1);//1번 컴퓨터 부터 탐색하니 dfs1로 시작 

	cout << cnt;
	return 0;
}