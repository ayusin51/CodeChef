#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long int findTime(int *arr, int n, int m) {

    long long int t = 0;
    for(int i = 0; i < n; i++) {
    
        t += ceil((double)arr[i] / (double)m);
    }
    return t;
}

int bin_search(int *arr, int n, int s, int e, int h) {

    if(s >= e) return s;
    
    int m = s + (e - s) / 2;
    
    long long int time = findTime(arr, n, m);
    //if(time == h) return m;
    if(time > h) return bin_search(arr, n, m + 1, e, h);
    return bin_search(arr, n, s, m, h);
}

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int n, h;
        cin >> n >> h;
        int *arr = new int[n];
        int max = -999999999;
        for(int i = 0; i < n; i++) {
        
            cin >> arr[i];
            if(max < arr[i]) max = arr[i];
        }
        
        cout << bin_search(arr, n, 1, max, h) << endl;
    }
}

