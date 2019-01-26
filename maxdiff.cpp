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
        int sum = 0;
        for(int i = 0; i < n; i++) {
        
            cin >> arr[i];
            sum += arr[i];
        }
        
        sort(arr, arr + n);
        
        if(k > n - k) k = n - k;
        int sum2 = 0;
        for(int i = 0; i < k; i++) {
        
            sum2 += arr[i];
        }
        
        cout << sum - 2 * sum2 << endl;
        
    }
}
