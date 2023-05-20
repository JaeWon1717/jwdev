#include<iostream>
#include<algorithm>
 
#define endl "\n"
#define MAX 10000
using namespace std;
 
int N;
int Arr[MAX];
 
void Input()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }
}
 
void Solution()
{
    if (prev_permutation(Arr, Arr + N) == true)
    {
        for (int i = 0; i < N; i++)
        {
            cout << Arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}