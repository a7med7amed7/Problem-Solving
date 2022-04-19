#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    ll ans = 0, res = 0;
    for (auto x : mp)
    {
        ll c = 0;
        for (ll i = 1; i < 32; i++)
        {
            ll p = (1 << i);
            if (mp.find(p - x.first) != mp.end() && (p - x.first) != x.first)
            {
                c += mp[p - x.first];
            }
            else if ((p - x.first == x.first))
            {
                res += x.ss * (x.ss - 1) / 2;
            }
        }
        ans += c * x.ss;
    }
    ans /= 2;
    cout << ans + res << "\n";
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
