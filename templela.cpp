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
        if(n % 2 == 0 || arr[0] != 1 || arr[n - 1] != 1) cout << "no" << endl;
        else {
        
            int ans = 1;
        
            for(int i = 1; i < n - 1; i++) {
            
                if(i <= n / 2) {
                
                    if(arr[i] != i + 1) {
                    
                        ans = 0;
                        break;
                    }
                }else {
                
                    if(arr[i] != n - i) {
                    
                        ans = 0;
                        break;
                    }
                }
            }
        
        
            if(ans) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
}
