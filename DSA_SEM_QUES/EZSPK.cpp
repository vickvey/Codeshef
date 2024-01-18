#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
    public: 
    static void solve();
};

class Main {
    public:
    static void main() {
        ll t = 0;
        cin >> t;

        while(t--) Solution::solve();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Main::main();

    return 0;
}

void Solution::solve() {
    // code here
    ll n = 0;
    cin >> n;

    string s;
    cin >> s;

    // logic here
    for(ll i = 0; i<n; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
            s[i] == 'o' || s[i] == 'u') {
            s[i] = '0';
        }
        else s[i] = '1';
    }

    if(s.find("1111") == string::npos) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";   
}
