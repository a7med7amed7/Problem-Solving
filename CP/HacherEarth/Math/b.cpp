#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll mul = 1, ans;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0)
            ans = (arr[i] * ans) / (gcd(arr[i], ans));
        else
            ans = arr[0];
    }
    cout << ans;
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