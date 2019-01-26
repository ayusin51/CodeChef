#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int bin_search(int s, int e, int num) {

    if(s + 1 >= e) return s;
    int mid = s + (e - s) / 2;
    if(mid * (mid + 1) / 2 == num) return mid;
    if(mid * (mid + 1) / 2 < num) return bin_search(mid, e, num);
    return bin_search(s, mid - 1, num);
}

int main() {

    int tc;
    cin >> tc;
    while(tc--) {

        int n;
        cin >> n;

        cout << bin_search(1, ceil(sqrt(2 * n)), n) << endl;
    }
}
