#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

bool check(ll mid, ll a[], ll b[], ll n, ll k)
{
    for (ll i = 0; i < n; i++)
    {
        if (a[i] * mid > b[i])
        {
            // cout << a[i] << " " << mid << " " << b[i] << "\n";
            if ((a[i] * mid) > (b[i] + k))
                return 0;
            else
            {
                k -= (a[i] * mid - b[i]);
            }
        }
        // cout << a[i] << " " << mid << " " << b[i] << "\n";
    }
    // cout << mid << " " << k << "\n";
    return 1;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll l = 0, r = 1e10, ans;

    while (l <= r)
    {
        ll mid = (l + r) >> 1;
        if (check(mid, a, b, n, k))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans;
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