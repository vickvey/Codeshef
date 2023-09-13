#include <bits/stdc++.h>
using namespace std;

void Solution(int a1, int a2, int b1, int b2) {
    int res = (a1-a2) + (b1-b2);
    if(res < 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // code here
    int t;
    cin >> t;
    while(t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        Solution(a1, a2, b1, b2);
    }
    return 0;
}