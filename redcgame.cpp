#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {

        int n, k;
        cin >> n >> k;

        int *arr = new int[n];
        for(int i = 0; i < n; i++) {

            cin >> arr[i];
        }

        sort(arr, arr + n);

        int first = -1, end = n - 2, start = n - 3;

        if(n == 1) goto stop;

        if(n == 2) {

            if(arr[0] > k) {

                arr[1] -= (arr[0] - k);
                arr[0] = k;
            }

            goto stop;
        }

//        int first = -1 , end = n - 2, start = n - 3;

        for(int i = 0; i < n; i++) {

            if(arr[i] > k) {

                first = i;
                break;
            }
        }

        if(first == -1) goto stop;

        while(start > first) {

            int m = min(arr[start], arr[end]);
            arr[start] -= (m - k);
            arr[end] -= (m - k);

            if(arr[start] > k) {

                start--;
                end = start + 1;
            } else if(arr[end] > k) {

                start--;
            } else {

                start -= 2;
                end = start + 1;
            }
        }

        if(arr[end] > k) {

            int temp = arr[end];
            arr[n - 1] -= temp - k;
            arr[end] = k;
        }

        stop:

        int sum = 0;
        for(int i = 0; i < n; i++) {

            sum += arr[i];
        }

        cout << sum << endl;
    }
}
