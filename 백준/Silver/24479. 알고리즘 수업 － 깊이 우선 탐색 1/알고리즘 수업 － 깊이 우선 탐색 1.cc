#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
#include <algorithm>
#include<stdio.h>
//#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
vector<int>grape[100001];
int result[100001];
bool visit[100001];
int cnt = 0;
void dfs(int r)
{
	
		if (visit[r] == 1)//방문했으면 
			return;//리턴 
		visit[r] = 1;//방문하지않았으면 1로 표시 
		cnt++;// 값을 증가시켜줌 ,순서가 될 위치 
		result[r] = cnt; //방문한 곳의 순서 

		for (int i = 0; i < grape[r].size(); i++)
		{
			dfs(grape[r][i]);
			//cout << "테스트용 : " << grape[r][i] << endl;
		}
	

}
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m, v;
	cin >> n >> m >> v;//정점의수, 간선의수 ,정점
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		grape[a].push_back(b);//양방향 그래프 이므로 
		grape[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
		sort(grape[i].begin(), grape[i].end());//오름차순이므로 디폴트 

	dfs(v);//v를 dfs로 전달 ,처음엔 1로시작하니 1이 전달됨
	for (int i = 1; i <= n; i++) {
		printf("%d\n", result[i]);
	}
}