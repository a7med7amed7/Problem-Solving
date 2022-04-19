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
    ll x, y, n, c;
    cin >> x >> y >> n;
    ll mod = 1e9 + 7;
    vector<ll> arr = {x, y, y - x, -x, -y, x - y};
    cout << (arr[(n - 1) % 6] % mod + mod) % mod;
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