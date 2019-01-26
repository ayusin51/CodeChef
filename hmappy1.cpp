#include <iostream>
#include <string>
#include <climits>
using namespace std;

int getLength(int *arr, int s, int e, int k) {

    int count = 0;
    int max_count = 0;
    
    for(int i = s; i <= e; i++) {
    
        if(arr[i] == 0) {
        
            count = 0;
        }else {
        
            count++;
            max_count = max(max_count, count);
            if(max_count >= k) return k;
        }
    }
    return max_count;
}

int main() {

    int n, q, k;
    cin >> n >> q >> k;
    int *arr = new int[5 * n];
    for(int i = 0; i < n; i++) {
    
        cin >> arr[i];
        arr[i + n] = arr[i + 2 * n] = arr[i + 3 * n] = arr[i + 4 * n] = arr[i];
    }
    
    int start = 0, end = n - 1;
    
    string query;
    cin >> query;
    int l;
    int flag = 0;
    for(int i = 0; i < q; i++) {
    
        char ch = query[i];
        if(ch == '!') {
        
            start++;
            end++;
            flag = 0;
        }else {
        
            if(!flag) {
                l = getLength(arr, start, end, k);
            }
            cout << l << endl;
            flag = 1;
        }
    }
    return 0;
}
