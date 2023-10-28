/**

 * Jay Shree Ram

 * Author: Vivek Kumar

 */

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;

void solve()
{

    // code here

    ll n = 0;

    cin >> n;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {

        cin >> arr[i];

    } // all input taken

    // logic

    ll l = 0;

    ll r = n - 1;

    ll max_sum = accumulate(arr.begin(), arr.end(), 0);

    while (r - l > 0)
    {

        ll min_elem = min(arr[l], arr[r]);

        if (arr[l + 1] < min_elem)
        {
            max_sum = max_sum - arr[l + 1] + min_elem;
            arr[l + 1] = min_elem;
            l++;
        }
        else
        {
            l++;
        }

        if (arr[r - 1] < min_elem)
        {
            max_sum = max_sum - arr[r - 1] + min_elem;
            arr[r - 1] = min_elem;
            r--;
        }
        else
        {
            r--;
        }
    }

    cout << max_sum << endl;
}

// Driver Code

int main()
{

    // code here

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll t = 1;

    cin >> t;

    while (t--)
    {

        solve();
    }

    return 0;
}