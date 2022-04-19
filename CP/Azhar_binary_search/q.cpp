#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
ll h, n, k;
bool check(ll mid, ll d)
{
    if ((3 * mid * (mid + 1) / 2) <= d)
    {
        return 1;
    }
    return 0;
}

void solve()
{

    cin >> h >> n >> k;

    ll l = 0, r = n, ans = 0;
    ll d = h * 60 - k;
    while (l <= r)
    {
        ll mid = (l + r) >> 1;
        if (check(mid, d))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
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