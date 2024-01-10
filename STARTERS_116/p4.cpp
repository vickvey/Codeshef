#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define max(x, y) (x > y ? x : y)
#define min(x, y) (x < y ? x : y)

const int MOD = 1e9 + 7;

void solve() {
    // code here
    ll n = 0, m = 0;
    cin >> n >> m;

    vector<ll> A(n, 0);
    for(auto &x: A) cin >> x;
    
    vector<ll> B(m, 0);
    for(auto &x: B) cin >> x;

    // logic 
    ll maxi = *max_element(B.begin(), B.end());
    ll x = n - maxi;

    sort(A.begin()+x, A.end());

    for(int i = 0; i<n; i++) {
        cout << A[i] << " ";
    } cout << "\n";
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