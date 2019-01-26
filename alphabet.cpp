#include <iostream>
#include <string>
using namespace std;

int main() {

    string inp;
    cin >> inp;
    int *freq = new int[26];
    int i = 0, len = inp.length();
    for(i = 0; i < len; i++) {
    
        freq[inp[i] - 'a']++;
    }
    
    int n;
    cin >> n;
    while(n--) {
    
        string str;
        cin >> str;
        int len = str.length();
        for(int i = 0; i < len; i++) {
        
            if(!freq[str[i] - 'a']) {
            
                cout << "No";
                goto end;
            }
        }
        cout << "Yes" ;
        end:
        cout << endl;
    }
}
