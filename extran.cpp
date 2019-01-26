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
        int ans;
        if(arr[1] - arr[0] != 1) ans = arr[0];
        else if(arr[n - 1] - arr[n - 2] != 1) ans = arr[n - 1];
        else {
        
            for(int i = 2; i < n - 1; i++) {
            
                if(arr[i] == arr[i - 1]) ans = arr[i];
            }
        }
        
        cout << ans << endl; 
    }
}
