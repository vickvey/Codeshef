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
    ll n = 0, m = 0, x = 0, y = 0;
    cin >> n >> m >> x >> y;

    // logic
    cout << ((n*x) + (m*y)) << endl;
}

// Driver Code
int main() {
    // code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;

    while(t--) {
        solve();
    }
    return 0;
}