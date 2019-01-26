#include <iostream>
using namespace std;

int main() {

    int tc;
    cin >> tc;

    while(tc--) {

        int n;
        cin >> n;

        int *arr = new int[n];
        int *freq = new int[2001];

        int i;
        for(i = 0; i < n; i++) {

            cin >> arr[i];
            freq[arr[i] + 1000]++;
        }

        int u, v;
        long long int ans = 0;
        for(u = -1000; u < 1001; u++) {

            if(freq[u + 1000]) {
                for(v = u + 1; v < 1001; v++) {

                    if(freq[v + 1000] && (u + v) % 2 == 0) {

                        if(freq[(u + v) / 2 + 1000]){

                            ans += freq[u + 1000] * freq[v + 1000];
                        }
                    }
                }
                ans += (((long long int)freq[u + 1000] - 1) * (long long int)freq[u + 1000]) / 2;
            }
        }

        cout << ans << endl;
    }
}
