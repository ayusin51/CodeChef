#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int n, k;
        vector<string> inp;
        vector<string> dict;
        cin >> n >> k;
        while(n--) {
        
            string s;
            cin >> s;
            inp.push_back(s);
        }
        while(k--) {
        
            int t;
            cin >> t;
            while(t--) {
            
                string s;
                cin >> s;
                dict.push_back(s);
            }
        }
        vector<string>::iterator it;
        for(it = inp.begin(); it != inp.end(); it++) {
        
            if(find(dict.begin(), dict.end(), *it) != dict.end()) {
            
                cout << "YES ";
            } else cout << "NO ";
        }
        cout << endl;
    }
}
