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

    if(n == 1) {
        cout << "YES\n";
        return;
    }
    ll sum_choc = 0;
    for(ll i = 0; i < n; i++) {
        ll temp = 0;
        cin >> temp;
        sum_choc += temp;
    } // taken input of sum of chocolates

    if(sum_choc < n) {
        cout << "NO\n";
        return;
    }

    // sum_choc is now greater than or equal to n
    ll rem = sum_choc % n;
    if(rem == 0) {
        cout << "YES\n";
    } else {
        if(k >= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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