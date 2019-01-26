#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int n, m;
        cin >> n >> m;
        int *freq = new int[n + m - 1];
        vector< pair<int, int> > v;
        pair<int, int> temp;
        
        for(int i = 1; i < n + m - 1; i++) freq[i] = 0;

        char inp;
        for(int i = 0; i < n; i++) {
        
            for(int j = 0; j < m; j++) {
            
                cin >> inp;
                if(inp == '1') {
                
                    temp.first = i;
                    temp.second = j;
                    
                    for(int k = 0; k < v.size(); k++) {
                    
                        pair<int, int> t = v.at(k);
                        int dist = abs(t.first - i) + abs(t.second - j);
                        freq[dist]++;
                    }
                    
                    v.push_back(temp);
                    
                }
            }
        }
        
        for(int i = 1; i < n + m  - 1; i++) {
        
            cout << freq[i] << " ";
        }
        cout << endl;
        delete freq;
    }
}
