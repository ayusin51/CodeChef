#include <iostream>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        int pages = x - y;
        int ans = 0;
        while(n--) {
        
            int p, c;
            cin >> p >> c;
            if(p >= pages && c <= k) ans = 1;
        }
        
        if(ans) cout << "LuckyChef";
        else cout << "UnluckyChef";
        
        cout << endl;
    }
}
