#include <bits/stdc++.h>
using namespace std;

#define TORTOISE -1

int Solution(int l, int v1, int v2) {
    // code here
    int t1 = ceil((double)l/v1);
    int t2 = ceil((double)l/v2);
    int ans = t1-t2;
    if(ans <= 1) {
        return TORTOISE;
    }
    return ans-1;
}

int main() {
    // code here
    int t;
    cin >> t;
    while(t--) {
        // l = race track length
        int l, v1, v2; // v1 = speed of tortoise and v2 = speed of hare
        // v1 < v2
        cin >> l >> v1 >> v2;

        cout << Solution(l, v1, v2) << endl;
    }
    return 0;
}