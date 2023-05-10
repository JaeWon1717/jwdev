#include <iostream>
#include <functional>
#include <algorithm>
#include<string>
#include<vector>
using namespace std;
/*
* 국어 점수가 감소하는 순서로
국어 점수가 같으면 영어 점수가 증가하는 순서로
국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서로
모든 점수가 같으면 이름이 사전 순으로 증가하는 순서로 (단, 아스키 코드에서 대문자는 소문자보다 작으므로 사전순으로 앞에 온다.)
*/
struct member
{
    int korea;
    int eng;
    int math;
    string name;
};
bool cmp(const member& x, const member& y)
{
    if (x.korea != y.korea)
        return x.korea > y.korea;
    if (x.korea == y.korea && x.eng == y.eng && x.math == y.math)
        return x.name < y.name;
    if (x.korea == y.korea && x.eng == y.eng)
        return x.math > y.math;
    if (x.korea == y.korea)
        return x.eng < y.eng;  
   
}
int main() {
    int n;
    cin >> n;
    vector<member> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].name >> v[i].korea >> v[i].eng >> v[i].math;
    }
    stable_sort(v.begin(), v.end(),cmp);
    //cout << "====================\n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i].name << "\n";// << " " << v[i].korea << " " << v[i].eng << " " << v[i].math << "\n";
    }


    return 0;
}
