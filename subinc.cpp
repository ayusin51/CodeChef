#include <iostream>
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
        int count = 1;
        long long int ans = 0;
        for(int i = 1; i < n; i++) {
        
            if(arr[i] < arr[i - 1]) {
            
                ans += (long long int)count * ((long long int)count + 1) / 2; 
                count = 0;
            }
            count++;
        }
        ans += (long long int)count * ((long long int)count + 1) / 2;
        cout << ans << endl;
    }
}
