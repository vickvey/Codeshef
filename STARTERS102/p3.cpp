#include <bits/stdc++.h>
using namespace std;

int Solution(vector<int> &A) {
    sort(A.begin(), A.end());

    return accumulate(A.begin(), A.end(), 0) - A[0];
}

int main() {
    // code here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> A;
        for(int i = 0; i<n; i++) {
            int x;
            cin >> x;
            A.push_back(x);
        }

        cout << Solution(A) << "\n";
    }
    return 0;
}