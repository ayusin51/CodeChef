#include <iostream>
#include <set>
using namespace std;

bool isPalindrome(int *arr, int n) {

    for(int i = 0; i < n / 2; i++) {

        if(arr[i] != arr[n - i - 1]) return false;
    }
    return true;
}
int main() {

    int tc;
    cin >> tc;
    while(tc--) {

        int n;
        cin >> n;
        bool ans =  true;
        int *arr = new int[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        if(n < 13) ans = false;
        if(ans) {
            if(!isPalindrome(arr, n)) {
                ans = false;
            }
            if(ans) {
            
                set<int> s;
                int k = 1;
                for(int i = 0; i < n; i++) s.insert(arr[i]);
                set<int>::iterator it;
                int max = -1;
                for(it = s.begin(); it != s.end(); it++) {
                
                    if(*it == k) k++;
                    else ans = false;
                    if(max < *it) max = *it;
                }
                if(max != 7) ans = false;
            }
            

        }
       // end:
        if(ans) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}


