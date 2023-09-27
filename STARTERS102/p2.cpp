/**
 * Problem

Chef has started a new job as an insurance agent.
Each insurance costs X dollars and Chef gets a 20% commission on selling each insurance.

Find the minimum number of insurances Chef needs to sell to earn at least 100 dollars.
*/


#include <bits/stdc++.h>
using namespace std;

int solve(int x) {
    int ans = 0;
    while(x < 100) {
        x += x/5;
        ans++;
    }
    return ans;
}

int main() {
    // code here
    int t;
    cin >> t;

    while(t--) {
        // code here
        int x;
        cin >> x;

        cout << solve(x) << "\n";
    }
    return 0;
}