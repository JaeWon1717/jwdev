#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;

#define INF (1 << 30)
#define X first
#define Y second
typedef pair<int, int> pi;

int n, x, y;
vector<pi> v;
set<pi> s;

int dist(pi a, pi b) 
{
    int x_dist = (a.X - b.X) * (a.X - b.X);
    int y_dist = (a.Y - b.Y) * (a.Y - b.Y);
    return x_dist + y_dist;
}

int main() {

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        v.push_back({ x,y });
    }

    // X좌표 순으로 정렬
    sort(v.begin(), v.end());
    s.insert({ v[0].Y, v[0].X });
    s.insert({ v[1].Y, v[1].X });

    int mini = dist(v[0], v[1]);
    int idx = 0;

    for (int i = 2; i < n; ++i)
    {
        while (idx < i)
        {
            int d = v[i].X - v[idx].X;
            if (d * d <= mini) break;
            else // mini보다 거리가 멀 시 후보군에서 제외
            {
                s.erase({ v[idx].Y, v[idx].X });
                idx++;
            }
        }

        // 후보군 내의 점들과의 거리 중 가장 가까운 거리로 업데이트
        auto start = s.lower_bound({ v[i].Y - sqrt(mini), -INF });
        auto end = s.upper_bound({ v[i].Y + sqrt(mini), INF });
        for (auto it = start; it != end; it++)
            mini = min(mini, dist({ it->Y, it->X }, v[i]));
        s.insert({ v[i].Y, v[i].X });
    }
    
    cout << mini << '\n';
}