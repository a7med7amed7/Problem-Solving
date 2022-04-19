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
    ll n, x;
    cin >> n;
    ll arr[n];
    ll even = 0, odd = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i & 1)
            even += arr[i];
        else
            odd += arr[i];
    }
    ll prefixEven = 0, prefixOdd = 0;
    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {

        if (i & 1)
            even -= arr[i];
        else
            odd -= arr[i];
        if (prefixEven + odd == prefixOdd + even)
            ans++;
        if (i & 1)
            prefixEven += arr[i];
        else
            prefixOdd += arr[i];
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
