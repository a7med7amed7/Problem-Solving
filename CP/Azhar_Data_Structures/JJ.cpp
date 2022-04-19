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
    cin >>
        n;
    vector<ll> arr(n);
    unordered_map<ll, ll> mp;
    ll mn = INT_MAX, mx = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    ll sum = mn + mx, ans = 0;

    for (ll i = 0; i < n; i++)
    {
        if (mp[sum - arr[i]])
        {
            ans += mp[sum - arr[i]];
        }
        mp[arr[i]]++;
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
