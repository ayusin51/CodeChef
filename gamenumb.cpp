#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
    
        int n, k;
        cin >> n >> k;
        int *A = new int[n];
        int *D = new int[n];
        unsigned long long int *B = new unsigned long long int[k];
        
        for(int i = 0; i < n; i++) {
        
            cin >> A[i];
        }
        
        unsigned long long int tot_cards = 0;
        
        for(int i = 0; i < n; i++) {
        
            cin >> D[i];
            tot_cards += D[i];
        }
        
        vector < pair<int, int> > cards;
        pair<int, int> p;
        
        for(int i = 0; i < n; i++) {
        
            p.first = A[i];
            p.second = D[i];

            cards.push_back(p);
        }

        sort(cards.begin(), cards.end());
        
        
        
        for(int i = 0; i < k; i++) {
        
            cin >> B[i];
        }
        
        //cout << "Total Cards : " << tot_cards
        
        int start = 0, end = n - 1;
        
        for(int i = 0; i < k; i++) {
        
            //cout << i << ". start = " << start << "  end = " << end << endl;
            if(i % 2 == 0) {
            
                unsigned long long int j = B[i];
                
                while(tot_cards > j) {
                
                    long long int k = tot_cards - j;
                    if(cards[start].second  > k) {
                    
                        cards[start].second  -= k;
                        tot_cards = j;
                    } 
                    else if(cards[start].second  == k) {
                    
                        start++;
                        tot_cards = j;
                    }
                    else {
                    
                        tot_cards -= cards[start++].second;
                    }
                }
                
            }else {
            
                unsigned long long int j = B[i];
                
                while(tot_cards > j) {
                
                    int k = tot_cards - j;
                    if(cards[end].second  > k) {
                    
                        cards[end].second  -= k;
                        tot_cards = j;
                    } 
                    else if(cards[end].second  == k) {
                    
                        end--;
                        tot_cards = j;
                    }
                    else {
                    
                        tot_cards -= cards[end--].second;
                    }
                }
                
            }
        }
        unsigned long long int sum = 0;
        for(int i = start; i <= end; i++) {
        
            sum += ((unsigned long long int)cards[i].first * (unsigned long long int)cards[i].second);
            //cout << "Sum : " << sum << endl;
        }
        
        cout << sum << endl;
    }
}
