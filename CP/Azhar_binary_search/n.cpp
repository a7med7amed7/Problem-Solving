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
    ll n, d;
    cin >> n >> d;
    vector<pair<ll, ll>> v(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].ff >> v[i].ss;
    }
    sort(all(v));
    ll l = 0, r = 0, ans = 0, mx = 0;
    while (r < n)
    {
        if (v[r].ff - v[l].ff < d)
        {
            ans += v[r].ss;
            r++;
        }
        else
        {
            mx = max(mx, ans);
            ans -= v[l].ss;
            l++;
        }
    }
    mx = max(mx, ans);
    cout << mx;
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