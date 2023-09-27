#include <bits/stdc++.h>
using namespace std;

#define MIN_SUM (3*n)/2

void Solution(int n, int k) {
    // code here
    int s = k - MIN_SUM;
    if(k < MIN_SUM || s%2 != 0 ) {
        cout << "-1\n";
        return;
    }
    // now k >= MIN_SUM && s is even s >= 2

    if(n == 2) {
        cout << "1 " << s+2 << "\n";
        return;
    }

    vector<int> v;
    for(int i = 0; i< n/2; i++) {
        v.push_back(1);
    }

    for(int i = 0; i< n/2; i++) {
        v.push_back(2);
    } // v = {1, 1, 1, 2, 2, 2} if n = 6

    int i = n-1;
    while (i >= 0) {
        if(v[i] + s <= 1e5) {
            v[i] += s;
            break;
        } else {
            s -= 2;
            v[i] += 2;
            i--;
        }
    }
    // print the vector
    for(int i = 0; i< n; i++) {
        cout << v[i] << " ";
    }
}

int main() {
    // code here
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        Solution(n, k); 
    }
    return 0;
}