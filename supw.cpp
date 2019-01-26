// https://www.codechef.com/ZCOPRAC/problems/ZCO14002

#include <iostream>
using namespace std;

int min1(int a, int b) {

    return a > b ? b : a;
}

int min(int a, int b, int c) {

    return min1(min1(a, b), c);
}

int main() {

    int n;
    cin>> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
    
        cin >> arr[i];
    }
    
    int *DP = new int[n];
    DP[0] = 0;
    DP[1] = 0;
    DP[2] = min(arr[0], arr[1], arr[2]);
    
    for(int i = 3; i < n; i++) {
    
        DP[i] = min(DP[i - 1] + arr[i], DP[i - 2] + arr[i - 1], DP[i - 3] + arr[i - 2]);
    }
    cout << DP[n - 1];
}
