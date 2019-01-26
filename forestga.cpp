#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


unsigned long long int findTot(vector<pair<unsigned long long int, unsigned long long int> >tree, unsigned long long int m, unsigned long long int w, unsigned long long l) {

    unsigned long long int tot = 0, val;
    for(int i = 0; i < tree.size(); i++) {

        val = tree[i].first + tree[i].second * m;
        if(val >= l) tot += val;
        if(tot >= w) return tot;
    }
    return tot;
}

unsigned long long int bin_search(vector<pair<unsigned long long int, unsigned long long int> > tree, unsigned long long int s, unsigned long long int e, unsigned long long int w, unsigned long long int l) {

    if(s >= e) return s;
    unsigned long long int mid = s +  (-s + e) / 2;
    unsigned long long int tot = findTot(tree, mid, w, l);
    //if(tot == w) return mid;
    if(tot >= w) return bin_search(tree, s, mid, w, l);
    return bin_search(tree, mid + 1, e, w, l);
}


int main() {

    int n;
    unsigned long long int  w, l;
    cin >> n >> w >> l;
    vector<pair<unsigned long long int, unsigned long long int> > tree;
    pair<unsigned long long int, unsigned long long int> p;

    for(int i = 0; i < n; i++) {

        cin >> p.first >> p.second;
        tree.push_back(p);
    }

//    sort(tree.begin(), tree.end());

    cout << bin_search(tree, 1, 1000000000000000000, w, l);
}
