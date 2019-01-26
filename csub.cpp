#include <iostream>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int n;
        int count = 0;
        char c;
        cin >> n;
        while(n--) {
        
            cin >> c;
            if(c == '1') count++;
        }
        
        long long int ans = (long long int)count * (long long int)(count + 1) / 2;
        cout << ans << endl;
    }
}
