/*
 * Problem Statement:
   Chef bought a new digital lock, but is quite suspicious of its actual strength in keeping out pesky thieves. 
   So, he wants to find out how quickly he can open the lock.

    The digital lock works as follows:
    On its screen, there is a string of digits S of length N.
    There is also a secret code K of length MM (1 ≤ M ≤ 10), which acts as the key to the lock.
    The lock will open if K is present anywhere in S as a contiguous substring.

Operating the lock is simple: Chef can choose an index ii, and either increment Si​ by 1, or decrement it by 1.
Here, the digits are cyclic, following the order 0→1→2→3→…→8→9→0→…0→1→2→3→…→8→9→0→…
In particular, incrementing 9 will turn it into 0 and decrementing 0 will turn it into 9.

You are given S and KK. What's the minimum number of moves Chef needs to open the lock?
*/

#include <bits/stdc++.h>
using namespace std;


int Solution(int n, int m, string s, string k) {
    // code here
    int ans = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == k[0]) {
            int j = 0;
            while(j<m && s[i+j] == k[j]) {
                j++;
            }
            if(j == m) {
                ans++;
            }
        }
    }
    return ans;
}

int main() {
    // code here
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m; 
        // n = length of strings and m = length of secret code where 1 <= m <= 10 

        string s,k;
        cin >> s >> k;

        // Solution here
        cout << Solution(n, m, s, k) << endl;
    }
    return 0;
}