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
        int *freq = new int[1001];
        for(int i = 0; i < n; i++) {
        
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int l1 = -1, l2 = -1;
        int flag = 0;
        for(int i = 1000; i >= 1; i--) {
        
            if(freq[i] >= 4) {
                if(flag == 0)
                    l1 = l2 = i;
                else
                    l2 = i;
                goto end;
            }
            else if(freq[i] >= 2) {
            
                if(flag == 0) {
                
                    l1 = i;
                    flag = 1;
                }else {
                    
                    l2 = i;
                    goto end;
                }
            }
        }
        
        end:
        if(l1 == -1 || l2 == -1) cout << -1 << endl;
        else cout << l1 * l2 << endl; 
    }
}
