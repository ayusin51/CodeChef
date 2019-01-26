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
        int min = arr[1] - arr[0];
        for(int i = 2; i < n; i++) {
        
            if(min > arr[i] - arr[i - 1]) min = arr[i] - arr[i - 1];
        }
        cout << min << endl;
    }
}
