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

    bool yes_asc = true;
    for(int i = 0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            yes_asc = false; 
            break;
        }
    }
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