#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(string my_string) {
    string answer = my_string;
    int len=answer.length();
    cout << len;
    for (int i = len - 1; i >= 0; i--)
    {
        
        if (answer[i] == 'a'|| answer[i] == 'e' || answer[i] == 'i' || answer[i] == 'o' || answer[i] == 'u' )
        {
           answer.erase(i,1);
       
        }

    }
    return answer;
}
int main()
{
    string s ;
    getline(cin, s);   
   // cout << s.length();
   cout << solution(s);
    return 0;
}