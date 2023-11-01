#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 7;

bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void solve() {
    ll n = 0;
    cin >> n;

    // logic
    if (n % 2 == 0) {
        cout << "Bob\n";
        return;
    }

    if (isPrime(n)) {
        cout << "Alice\n";
        return;
    }

    for (ll p = 3; p * p <= n; p += 2) {
        if (n % p == 0) {
            cout << "Alice\n";
            return;
        }
    }

    cout << "Bob\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
