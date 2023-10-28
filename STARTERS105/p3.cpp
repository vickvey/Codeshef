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

    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    } // all input taken

    // logic
    ll sum = accumulate(arr.begin(), arr.end(), 0);
    ll each = sum / n;

    vector<ll> give(n);
    vector<ll> take(n);

    for(ll i = 0; i<n; i++) {
        if(arr[i]-each > 0) {
            if((arr[i]-each)%2 != 0) {
                cout << "NO\n";
                return;
            }
            give[i] = arr[i] - each;
            take[i] = 0;
        } else {
            if((each-arr[i])%2 != 0) {
                cout << "NO\n";
                return;
            }
            give[i] = 0;
            take[i] = each - arr[i];
        }
    }

    // check if give and take are same
    if(accumulate(give.begin(), give.end(), 0) 
        == accumulate(take.begin(), take.end(), 0)) 
    {
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