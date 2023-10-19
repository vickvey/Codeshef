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
    ll N = 0;
    cin >> N;

    string s;
    cin >> s;

    // logic starts 
    if(N == 1) {
        cout << "8\n";
        return;
    }

    if(N == 2) {
        ll num = stoll(s);
        if(num % 8 == 0) {
            cout << num << endl;
        } else {
            ll min_swap = mod;
            ll ans = 0;
            for (ll i = 16; i <= 96; i += 8) {
                ll temp_diff = abs(i % 10 - num % 10) + abs((i/10) - (num/10));
                if (temp_diff < min_swap) {
                    ans = i;
                    min_swap = temp_diff;
                }
            }
            cout << ans << "\n";
        } return;
    }

    if(N >= 3) {
        ll num = stoll(s.substr(N-3, 3));
        if(num < 10) {
            num = 8;
            s[N] = 8;
            cout << s << endl;
            return;
        }
        if(num < 100 && num%2 == 0) { // N = 44
            for(ll i = 1; i<=9; i++) {
                ll cmp = (i*100) + num; // N = 144
                if(cmp % 8 == 0) {
                    s[N-3] = i + '0';
                    cout << s << "\n";
                    return;
                }
            }
            // here num is two digit even but not divisible by 8
            ll min_swap = mod;
            ll ans = 0;
            for (ll i = 16; i <= 96; i += 8) {
                ll temp_diff = abs(i % 10 - num % 10) + abs((i / 10) - (num / 10));
                if (temp_diff < min_swap) {
                    ans = i;
                    min_swap = temp_diff;
                }
            }
            s[N] = (ans%10) + '0';
            s[N-1] = (ans/10) + '0';

            cout << s << endl;
            return;
        } else if(num < 100 && num%2 != 0) {
            // same as N == 2 case
            ll min_swap = mod;
            ll ans = 0;
            for (ll i = 16; i <= 96; i += 8) {
                ll temp_diff = abs(i % 10 - num % 10) + abs((i / 10) - (num / 10));
                if (temp_diff < min_swap) {
                    ans = i;
                    min_swap = temp_diff;
                }
            }
            s[N] = ans % 10;
            s[N - 1] = ans / 10;

            cout << s << endl;
            return;
        }

        if(num % 8 == 0) {
            cout << s << endl;
        } else {
            ll min_diff = mod;
            ll ans = 0;
            for(ll i = 104; i<=992; i += 8) {
                ll temp_diff = abs(i%10 - num%10) + abs((i/10)%10 - (num/10)%10)
                    + abs((i/100) - (num/100));
                if (temp_diff < min_diff) {
                    ans = i;
                    min_diff = temp_diff;
                }
            }
            s[N] = (ans%10) + '0';
            s[N-1] = ((num/10)%10) + '0';
            s[N-2] = (ans/100) + '0';

            cout << s << endl;
        }
        return;
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