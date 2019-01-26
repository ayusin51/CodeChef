#include <iostream>
using namespace std;

// __builtin_popcount(int n);

int main() {

    int tc;
    cin >> tc;
    while(tc--) {

        unsigned int a, b, c;
        cin >> a >> b >> c;

        int bit_a = __builtin_popcount(a);
        int bit_b = __builtin_popcount(b);

        unsigned int min_a = ~(-1 << bit_a);
        unsigned int min_b = ~(-1 << bit_b);

        unsigned int max_a = min_a << (32 - bit_a);

        int count = 0;
        for(unsigned int i = min_a; i <= c - min_b; i++) {

            if(__builtin_popcount(i) != bit_a) continue;
            unsigned int temp = c - i;
            temp = __builtin_popcount(temp);
//            if(temp > bit_b) break;
            if(temp == bit_b) count++;
        }

        cout << count << endl;
    }
}
