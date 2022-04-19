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
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 1e12;
    while (l < r)
    {
        ll mid = (r + l) / 2;
        ll sum = a[0] + mid;
        bool f = 1;
        for (int i = 1; i < n; i++)
        {
            ll rhs = sum * k / 100;
            if (a[i] > rhs)
            {
                f = 0;
                break;
            }
            sum += a[i];
        }
        if (f)
            r = mid;
        else
            l = mid + 1;
    }
    cout << l << "\n";
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