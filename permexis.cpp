#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int n;
        cin >> n;
        int *arr = new int[n];
        for(int i = 0; i < n; i++) {
        
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int ans = 1;
        for(int i = 0; i < n - 1; i++) {
        
            if(arr[i] - arr[i + 1] < -1) ans = 0;
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
