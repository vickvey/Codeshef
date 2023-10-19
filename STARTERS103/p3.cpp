
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 7;

void solve() {
    // code here
    ll a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    // logic
    vector<ll> v_alice = {a1, a2, a3};
    vector<ll> v_bob = {b1, b2, b3};

    sort(v_alice.begin(), v_alice.end(), greater<ll>()); // descending order
    sort(v_bob.begin(), v_bob.end(), greater<ll>()); // descending order

    ll alice = (100 * v_alice[0]) + (10 * v_alice[1]) + (v_alice[2]);
    ll bob = (100 * v_bob[0]) + (10 * v_bob[1]) + (v_bob[2]);

    if(alice > bob) {
        cout << "Alice" << endl;
    } else if(alice < bob) {
        cout << "Bob" << endl;
    } else {
        cout << "Tie" << endl;
    }

}

int main() {
    // code here
    ll t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}