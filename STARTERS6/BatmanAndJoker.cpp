#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    // code here
    ll n = 0;
    cin >> n;

    string s;
    cin >> s;

    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    // logic here
    for(ll i = 1; i<n; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            string a = s;
            string temp = a.substr(0, i);
            reverse(temp.begin(), temp.end());
            for(ll j = 0; j<i; j++) {
                s[j] =  temp[j];
            }
        }
    }

    cout << s << endl;
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