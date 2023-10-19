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
    ll n = 0;
    cin >> n;
    
    if(n == 1 || n == 2) {
        cout << "YES\n";
        return;
    }

    if(n%2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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