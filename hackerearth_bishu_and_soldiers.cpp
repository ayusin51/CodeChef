#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int *arr = new int[n];
    int *sum = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sum[0] = arr[0];
    
    
    sort(arr, arr + n);
    
    
    for(int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }
    
    int q;
    cin >> q;
    while(q--) {
        int a;
        cin >> a;
        int *u = upper_bound(arr, arr + n, a);
        int ub = u - arr;
        cout << ub << " ";
        if(ub > 0) cout << sum[ub - 1];
        else cout << 0;
        
        cout << endl;
    }
}
