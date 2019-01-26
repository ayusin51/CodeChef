// Mutated Minions
//https://www.codechef.com/CHITKA1C/problems/CHN15A

#include <iostream>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int n, k;
        cin >> n >> k;
        int count = 0, temp;
        while(n--) {
        
            cin >> temp;
            if((temp + k ) % 7 == 0) count++;
        }
        cout << count << endl;
    }
}
