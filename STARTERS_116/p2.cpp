#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define max(x, y) (x > y ? x : y)
#define min(x, y) (x < y ? x : y)

const int MOD = 1e9 + 7;

void solve() {
    // code here
    vector<char> arr(6, 0);
    for(auto &x: arr) cin >> x;

    for(int i = 0; i<=3; i++) {
        if(arr[i] == 'W' && arr[i+1] == 'W' && arr[i+2] == 'W') {
            cout << "YES\n";
            return;
        } 
    }
    cout << "NO\n";
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