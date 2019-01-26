#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int n;
        cin >> n;
        int  *arr = new int[n];
        for(int i = 0; i < n; i++) {
        
            cin >> arr[i];
        }
        
        sort(arr, arr + n);
        
        int count = 0;
        for(int i = 1; i < n; i++) {
        
            if(arr[i] == arr[i -1]) count++;
        }
        
        cout << count << endl;
    }
}
