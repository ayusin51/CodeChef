#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int m, n;
        cin >> n >> m;
        int *moves = new int[m];
        for(int i = 0; i < m; i++) {
        
            cin >> moves[i];
        }
        int **room = new int*[n];
        int *size = new int[n];
        for(int i = 0; i < n; i++) {
        
            cin >> size[i];
            room[i] = new int[size[i]];
            for(int j = 0; j < size[i]; j++) {
            
                cin >> room[i][j];
            }
            sort(room[i], room[i] + size[i]);
        }
        
        int sum = 0;
        
        for(int i = 0; i < m; i++) {
        
            int j = moves[i];
            if(size[j]> 0) {
            
                sum += room[j][--size[j]];
            }
        }
        cout << sum << endl;
    }
}
