#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define max(x, y) (x > y ? x : y)
#define min(x, y) (x < y ? x : y)

const int MOD = 1e9 + 7;

void solve() {
    // code here
    ll n = 0, x = 0;
    cin >> n >> x;

    string s;
    cin >> s;

    if(s[0] == '0') {
        cout << "NO\n";
        return;
    }

    // here s[0] == 1
    ll count = 0;
    for(ll i = 1; i<n; i++) {
        if(s[i] == '0') {
            ll count = 0;
            while(s[i] == '0') {
                count++;
                i++;
            }
            if(count > x) {
                cout << "NO\n";
                return;
            }
        } else {
            count = 0;
        }
    }
    cout << "YES\n";
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