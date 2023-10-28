/**
 * Jay Shree Ram
 * Author: Vivek Kumar
 */
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 7;

void solve() {
    // code here
    ll n = 0, k = 0;
    cin >> n >> k;

    string bs;
    cin >> bs;

    // logic
    map<bool, ll> mp;
    for(ll i = 0; i<n; i++) {
        mp[static_cast<bool>(bs[i])]++;
    } // made a freq table of strings 

    if(mp[false] == 0 || mp[true] == 0) {
        cout << "0\n" << endl;
    }
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