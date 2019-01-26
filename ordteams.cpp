#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {

        pair<int, pair<int, int> > arr[3];
        for(int i = 0; i < 3; i++) {

            cin >> arr[i].first >> arr[i].second.first >> arr[i].second.second;
        }

        sort(arr, arr + 3);

        int flag = 1;

        for(int i = 1; i < 3; i++) {

            if(!((arr[i].first >= arr[i - 1].first && arr[i].second.first >= arr[i - 1].second.first && arr[i].second.second >= arr[i - 1].second.second) && (arr[i].first > arr[i - 1].first || arr[i].second.first > arr[i - 1].second.first || arr[i].second.second > arr[i - 1].second.second))) {

                flag = 0;
                break;
            }
        }

        if(flag) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
