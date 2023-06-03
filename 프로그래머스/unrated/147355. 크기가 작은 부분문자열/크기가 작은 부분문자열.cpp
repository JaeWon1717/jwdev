#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
     string a, b;
    cin >> t >> p;
    for (int i = 0; i <= t.length()-p.length(); i++)
    {
        a = t.substr(i,p.length());
        cout << a << " ";
        if (a <= p)
            answer++;
    }
    return answer;
}