#include <bits/stdc++.h>
using namespace std;

int main() {
    // code here
    vector<int> arr = {1, 9, 7, 10, 5};
    int x = arr.size() - 4; // we have to sort last four numbers
    sort(arr.begin()+x, arr.end());

    for(int i = 0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    } cout << "\n";
    return 0;
}