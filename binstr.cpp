#include <iostream>
using namespace std;

int exor(int a, int b) {

    if(!b) return a;
    if(!a) return b;

    return exor(a / 10, b / 10) * 10 + (a % 10) ^ (b % 10);
}

int main() {

    int n, q;
    cin >> n >> q;
    int *arr = new int[n + 1];
    for(int i = 1; i <= n; i++) {
    
        cin >> arr[i];
    }
    
    while(q--) {
    
        int l, r;
        cin >> l >> r;
        int x;
        cin >> x;
        int max = -999999;
        int ans = -1;
        for(int i = l; i <= r; i++) {
        
            int temp = exor(arr[i], x);
            if(temp > max) {
            
                max = temp;
                ans = i;
            }
        }
        
        cout << ans << endl;
    }
} 
