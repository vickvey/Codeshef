/**
 * Jay Shree Ram
 * Author: Vivek Kumar
 */
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 7;

void solve() {
    ll n = 0, k = 0;
    cin >> n >> k;

    vector<ll> arr(n);
    for(auto &i: arr) cin >> i;

    // logic 
    // we will use sliding window technique to solve this problem
    // we will take k as window size
    // we have to count windows with or of elements as odd
    ll ans = 0;
    
    ll oddCount = 0;

    for(ll i = 0; i < k; i++) {
        if(arr[i] & 1) oddCount++;
    }
    if(oddCount > 0) ans++;

    // sliding window
    for(ll i = k; i<n; i++) {
        if(arr[i] & 1) oddCount++;
        if(arr[i-k] & 1) oddCount--;
        if(oddCount > 0) ans++;
    }
    cout << ans << "\n";
}

// Driver Code
int main() {
    // code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}