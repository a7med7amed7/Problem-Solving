#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

ll fastPower(ll b, ll p, ll mod)
{
    if (p == 0)
        return 1;
    ll temp = fastPower(b, p / 2, mod);
    if (p & 1)
        return (((temp * temp) % mod) * b) % mod;
    else
        return ((temp * temp) % mod);
}

void solve()
{
    int n, r;
    while (cin >> n >> r)
    {

        if (n == 0 && r == 0)
            return;

        ll ans1 = 1, ans2 = 1;
        int dif = n - r;
        if (dif < r)
        {
            swap(r, dif);
        }
        for (int i = n; i > dif; i--)

            ans1 *= i;

        for (int i = r; i > 1; i--)
            ans2 *= i;

        cout << n << " things taken " << r << " at a time is " << ans1 / ans2 << " exactly."
             << "\n";
    }
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
    // cout << fastPower(3, 18132, 17);
}