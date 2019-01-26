#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int n, k;
        cin >> n >> k;
        
        int *arr = new int[n];
        for(int i = 0; i < n; i++) {
        
            cin >> arr[i];
        }
        sort(arr, arr + n);
        if(k >= arr[0]) k -= arr[0];
        else {
        
            cout << k;
            continue;
        }
        int ans = 0;
        for(int i = 1; i < n; i++) {
        
            if(arr[i] - arr[i - 1] > 1) {
            
                int diff = arr[i] - arr[i - 1] - 1;
                if(diff <= k) k -= diff;
                else {
                
                    ans = arr[i] + k + 1;
                    goto end;
                }
            }
        }
        if(ans == 0)
            ans = arr[n - 1] + k + 1;
        end:
        cout << ans << endl;
    }
}
