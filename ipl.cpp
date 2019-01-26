//https://www.codechef.com/ZCOPRAC/problems/ZCO14004

#include <iostream>
using namespace std;

int max(int a, int b, int c) {

    return max(max(a, b), c);
}

int main() {

    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
    
        cin >> arr[i];
    }
    
    int *dp = new int[n];
    dp[0] = arr[0];
    dp[1] = arr[0] + arr[1];
    dp[2] = max(arr[0] + arr[1], arr[1] + arr[2], arr[0] + arr[2]);
    
    for(int i = 3; i < n; i++) {
    
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
    }
    cout << dp[n - 1] << endl;
}
