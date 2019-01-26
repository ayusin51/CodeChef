#include <iostream>
#include <cstring>
using namespace std;

int getday(string s) {

    if(s.compare("monday") == 0) return 0;
    if(s.compare("tuesday") == 0) return 1;
    if(s.compare("wednesday") == 0) return 2;
    if(s.compare("thursday") == 0) return 3;
    if(s.compare("friday") == 0) return 4;
    if(s.compare("saturday") == 0) return 5;
    if(s.compare("sunday") == 0) return 6;
}

int main() {

    int tc;
    cin >> tc;
    int day[7] = {0, 1, 2, 3, 4, 5, 6};
    while(tc--) {
    
        string a, b;
        cin >> a >> b;
        int l, r;
        int d1 = getday(a), d2 = getday(b);
        cin >> l >> r;
        int diff = (d2 - d1 + 1 + 7) % 7, count = 0;
        int ans;
        while(diff <= r) {
        
            if(diff >= l) count++;
            ans = diff;
            diff += 7;
        }
        if(count == 0) cout << "impossible";
        else if(count > 1) cout << "many";
        else cout << ans;
        
        cout << endl;
    }
}
