#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define max(x, y) (x > y ? x : y)
#define min(x, y) (x < y ? x : y)

const int MOD = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    
    vector<int> arr(n, 0);
    for(auto &x: arr) cin >> x;
    
    vector<int> prefix_min(n, 0);
    prefix_min[0] = arr[0];
    for(int i = 1; i<n; i++) {
        prefix_min[i] 
            = min(prefix_min[i-1], arr[i]);
    }
    
    int score = 1;
    
    for(int i = n-1; i>0; i--) {
        if(prefix_min[i-1] != prefix_min[i]) score++;
    }
    
    for(int i = 0; i<n; i++) {
        arr[i] -= prefix_min[i];
    }
    
    for(int i = 0; i<n; i++) {
        if(arr[i] != 0) score++;
    }
    
    cout << score << endl;
}

// driver's code
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 0;
    cin >> t;

    while(t--) solve();
    return 0;
}