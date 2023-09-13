#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Solution(vector<int>& v) {
    // make concussive
    int f_beg = -1; 
    int f_end = -1;
    sort(v.begin(), v.end());
    for(int i = 0; i<v.size()-1; i++) {
        if(v[i] < v[i+1] && v[i+1] < v[i+2]) {
            swap(&v[i+1], &v[i+2]);
            i = i+2;
            continue;
        }
        if(v[i] == v[i+1]) {
            f_beg = i;
            while(i < v.size()-1) {
                if(v[i] == v[i+1]) {
                    i++;
                }
            }
        }
    }
}

int main() {
    // code here
    int t;
    cin >> t;
    while(t--) {
        // here
        int n, temp;
        cin >> n;
        vector<int> v;
        for(int i = 0; i<n; i++) {
            cin >> temp;
            v.push_back(temp);
        }
        // logic here
        Solution(v);
        for(int i = 0; i<n; i++) {
            cout << v[i] << " ";
        } cout << "\n";
    }

    return 0;
}