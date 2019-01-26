#include <iostream>
#include <algorithm>
using namespace std;

int bin_search(int *arr, int s, int e, int last, int min, int *sum) {

    if(s >= e) return s;
    int m = s + (e - s) / 2;
    int req = (last - m) * min - (sum[last - 1] - sum[m - 1]);
    if(req == (m - s)) return m;
    if(req < (m - s)) return bin_search(arr, s, m, last, min, sum);
    return bin_search(arr, m + 1, e, last, min, sum);
}

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int n, q;
        cin >> n >> q;
        int *arr = new int[n];
        int *sum = new int[n];
        for(int i = 0; i < n; i++) {
        
            cin >> arr[i];
        }
        sort(arr, arr + n);
        sum[0] = arr[0];
        for(int i = 1; i < n; i++) {
        
            sum[i] = sum[i - 1] + arr[i];
        }
        
        while(q--) {
        
            int a;
            cin >> a;
            int k = (lower_bound(arr, arr + n, a) - arr);
            int val = bin_search(arr, 0, k - 1, k, a, sum);
            if(val == k - 1) {

                if(!(k >= a - arr[k])) val++;
            }
            cout << n - val << endl;
        }
    }
}
