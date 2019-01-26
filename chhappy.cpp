#include <iostream>
#include <vector>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int n;
        cin >> n;
        int *arr = new int[n + 1];
        int *freq = new int[100001];
        for(int i = 1; i <= 100000; i++) {
        
            freq[i] = 0;
        }
        vector<int> farr[100001];
        for(int i = 1; i <= n; i++) {
        
            cin >> arr[i];
            freq[arr[i]]++;
            farr[arr[i]].push_back(i);
        }
        int ans = 0;
        for(int i = 1; i <= 100000; i++) {
        
            if(freq[i] >= 2) {
            
                int count = 0;
                for(int k = 0; k < farr[i].size(); k++) {
                
                    if(freq[farr[i][k]]) count++;
                    if(count >= 2) {
                    
                        ans = 1;
                        break;
                    }
                }
            }
        }
        
        /*int ans = 0;
        
        for(int i = 1; i < n; i++) {
        
            for(int j = i + 1; j <= n; j++) {
            
                if(arr[i] != arr[j] && arr[arr[i]] == arr[arr[j]]) {
                    ans = 1;
                    break;
                }
            }
        }*/
        
        if(ans) cout << "Truly Happy" << endl;
        else cout << "Poor Chef" << endl;
        
    }
}
