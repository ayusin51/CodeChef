#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {

        string in1, in2;
        cin >> in1 >> in2;
        //cout << in1 << endl << in2 << endl;
        int ans = 1;
        if(in1.length() != in2.length()) ans = 0;
        else {

            int i = 0;
            while(in1[i] != '\0') {

                if((in1[i] != in2[i]) && (in1[i] != '?' && in2[i] != '?')) ans = 0;
                i++;
            }
        }
        if(ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
