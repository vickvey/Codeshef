
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 7;

void put_num_to_string (string &str, int size, int num) {
    str[size - 1] = (num % 10) + '0';
    num /= 10;
    str[size - 2] = (num % 10) + '0';
    num /= 10;
    str[size - 3] = (num % 10) + '0';
}

int two_digit_stepCount(int N, int m) {
    int count = 0;
    count = abs((N/10) - (m/10)) + abs((m%10) - (m%10));
    return count;
}

int three_digit_stepCount(int N, int m) {
    int count = 0;
    count = abs((N/100) - (m/100)) + abs(((N%100)/10) - ((m%100)/10)) + abs((N%10) - (m%10));
    return count;
}

void solve() {
    // code here
    ll size;
    cin >> size;

    string N;
    cin >> N;

    if(size == 1) {
        cout << N << endl;
        return;
    }

    if(size == 2) {
        int num = stoi(N);
        if(num % 8 == 0) {
            cout << N << endl;
            return;
        }
        int num_so_far = 0;
        int min_step_so_far = 0;
        for(int i = 10; i <= 99; i++) {
            if(i % 8 == 0) {
                int step_count = two_digit_stepCount(num, i);
                if(num_so_far == 0) {
                    num_so_far = i;
                    min_step_so_far = step_count;
                } else {
                    if(step_count < min_step_so_far) {
                        num_so_far = i;
                        min_step_so_far = step_count;
                    }
                }
            }
        }
        cout << num_so_far << endl;
    }

    if(size >= 3) {
        int num = (N[size - 1] - '0') + (10 * (N[size - 2] - '0')) + (100 * (N[size - 3] - '0'));

        if(num % 8 == 0) {
            cout << N << endl;
            return;
        }

        int num_so_far = 0;
        int min_step_so_far = 0;
        for(int i = 100; i <= 999; i++) {
            if(i % 8 == 0) {
                int step_count = three_digit_stepCount(num, i);
                if(num_so_far == 0) {
                    num_so_far = i;
                    min_step_so_far = step_count;
                } else {
                    if(step_count < min_step_so_far) {
                        num_so_far = i;
                        min_step_so_far = step_count;
                    }
                }
            }
        }
        return put_num_to_string(N, size, num_so_far);
    }
}

// Driver Code
int main() {
    // code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}