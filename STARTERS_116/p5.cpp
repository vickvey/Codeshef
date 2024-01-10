#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define max(x, y) (x > y ? x : y)
#define min(x, y) (x < y ? x : y)

const int MOD = 1e9 + 7;

long long countDistinctArrays(int n) {
    // Count the number of odd divisors of 'n'
    int oddDivisors = 0;

    // Count the number of 2s in the prime factorization of 'n'
    while (n % 2 == 0) {
        n /= 2;
    }

    // Count odd divisors
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            oddDivisors++;
            n /= i;
        }
    }

    if (n > 2) {
        oddDivisors++;
    }

    // Calculate the count of distinct arrays using the formula
    return (long long)pow(2, oddDivisors - 1);
}

void solve() {
    // code here
    ll n = 0;
    cin >> n;

    // logic 
    if(n == 1) {
        cout << "1\n";
        return;
    }

    if(n == 2) {
        cout << "0\n";
        return;
    }

    if(n == 3) {
        cout << "1\n";
        return;
    }

    if(n == 4) {
        cout << "1\n";
        return;
    }

    cout << countDistinctArrays(n) << endl;
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