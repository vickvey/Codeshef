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

    // logic here
    if(n % 2 == 0) {
        cout << "1";
        for(ll i = 1; i<n-1; i++) cout << "0";
        cout << "1\n";
        return;
    }

    // here n is odd
    for(ll i = 0; i<n; i++) {
        if(i == n/2) cout << "1";
        else cout << "0";
    }
    cout << endl;
}

/*

n = 6
ans : 100001

*/