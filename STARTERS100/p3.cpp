#include <bits/stdc++.h>
using namespace std;

void Solution(int n) {
    if(n == 4) {
        cout << "2 1 1\n";
        return;
    }
    if(n%2 == 0) {
        cout << n-2 << " 1 1\n";
        return;
    } else {
        cout << n-4 << " 2 2\n";
        return;
    }
}

int main() {
    // code here
    int t;
    cin >> t;
    while(t--) {
        // here
        int n;
        cin >> n;
        // call solution here
        Solution(n);
    }

    return 0;
}