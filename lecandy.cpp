#include <iostream>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int n, m;
        cin >> n >> m;
//        m = m * n;
        int k;
        while(n--) {
        
            cin >> k;
            m -= k;
        }
        if(m >= 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
