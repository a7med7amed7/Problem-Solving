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
    string s;
    cin >> s;
    map<char, bool> mp;
    char x;

    for (ll i = 0; i < k; i++)
    {
        cin >> x;
        mp[x] = 1;
    }
    ll sub = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (mp[s[i]])
        {
            sub++;
        }
        else
        {
            ans += sub * (sub + 1) / 2;
            sub = 0;
        }
    }
    ans += sub * (sub + 1) / 2;

    cout << ans << "\n";
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