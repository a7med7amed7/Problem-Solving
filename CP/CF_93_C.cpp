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
    string s;
    cin >> s;
    ll arr[n + 1];
    arr[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        arr[i] = arr[i - 1] + (s[i - 1] - '0');
    }
    map<ll, ll> mp;
    mp[0] = 1;
    ll c = 0;
    for (ll i = 1; i <= n; i++)
    {
        c += mp[arr[i] - i];
        mp[arr[i] - i]++;
    }
    cout << c << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}