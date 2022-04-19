#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll l = 0, r = 1e12;

    while (l <= r)
    {
        ll mid = (r + l) >> 1, c = 0;
        for (ll i = n / 2; i < n; i++)
        {
            if (mid - arr[i] > 0)
                c += (mid - arr[i]);
        }
        if (c <= k)
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << r;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}