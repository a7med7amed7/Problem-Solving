#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

int n, k;

bool check(ll mid, ll arr[])
{
    ll c = 0, prev;
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
        {
            c++;
            prev = 0;
            continue;
        }
        if (arr[i] - arr[prev] + 1 > mid)
        {
            c++;
            prev = i;
        }
    }
    if (c <= k)
        return 1;
    else
        return 0;
}

void solve()
{
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll l = 0, r = 1e9, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) >> 1;
        if (check(mid, arr))
        {
            r = mid - 1;
            ans = mid;
        }
        else
            l = mid + 1;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    int t;
    cin >> t;
    while (t--)
        solve();
}