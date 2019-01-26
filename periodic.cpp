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
        
        int flag = 0, pos = -1;
/*        if(arr[0] != 1 || arr[0] != -1) {
        
            cout << "impossible" << endl;
            continue;
        }*/
        for(int i = 0; i < n; i++) {
        
            if(arr[i] == -1) continue;
            if(!flag) flag = 1;
            if(pos != -1) {
            
                if(arr[i] - arr[pos] > i - pos) {
                
                    cout << "impossible" << endl;
                    goto end;
                }
                if(arr[i] - arr[pos] < i - pos) {
                
                    if(flag == 1) flag = i - arr[i] + 1;
                }
            }
            pos = i;
        }
        if(!flag) cout << "inf" << endl;
        else if(flag == 1) cout << "impossible" << endl;
        else cout << flag << endl;
        
        end:
        cout << "";
    }
}
