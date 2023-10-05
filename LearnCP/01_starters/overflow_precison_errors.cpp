
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int a, b; // also to avoid overflow you can make them 
		 		  // long long int
		cin >> a >> b;

		// to avoid int overflow
		cout << (a * 1LL * b) << endl;
	}
	return 0;
}