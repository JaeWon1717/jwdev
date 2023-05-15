#include <iostream>
#include <algorithm>
#include<string>
#include<vector>
using namespace std;
int count1 = 1;
int count2 = 0;


int fib(int n) {
    
    if (n == 1 || n == 2)
    {
        //count1++;
        return 1;
    }
    else
    {
        count1++;
        return (fib(n - 1) + fib(n - 2));
    }
}

int fibonacci(int n) {
    int* f = new int[n + 1];
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
        count2++;
    }
    int result = f[n];
    delete[] f; // 동적으로 할당한 메모리 해제
    return result;
}


int main() {

	int n;
    cin >> n;
    fibonacci(n); fib(n);
    cout << count1 <<" "<< count2;
}