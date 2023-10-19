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
    ll x = 0, y = 0, k = 0;
    cin >> x >> y >> k;

    // logic
    if(x == y) {
        cout << x+y << "\n";
        return;
    }

    if(x % y == 0) {
        cout << 2*y << "\n";
        return;
    }

    if(y % x == 0) {
        cout << 2*x << "\n";
        return;
    }

    ll gcd = __gcd(x, y);
    if(gcd == 1) {
        if(k == 1) {
            cout << min(x, y) + gcd << "\n";
            return;
        }
        if(k >= 2) {
            cout << "2\n";
        }
        return;
    } else {
        if(k == 1) {
            cout << min(x, y) + gcd << "\n";
            return;
        }
        if(k >= 2) {
            cout << (2*gcd) << "\n";
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