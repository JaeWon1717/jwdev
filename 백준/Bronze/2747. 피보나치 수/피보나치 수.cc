#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int fibo(int n)
{
    int* f = new int[n + 1];
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    
    }
    int result = f[n];
    delete[] f; // 동적으로 할당한 메모리 해제
    return result;
		
}
int main()
{
	int n;
	cin >> n;
	cout<<fibo(n);
	
}