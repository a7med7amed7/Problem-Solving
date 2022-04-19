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
    int n;
    cin >> n;
    int l = 0, r = n, mid;
    float ans;
    while (l <= r)
    {
        mid = (l + r) >> 1;
        if (mid * mid == n)
        {
            ans = (float)mid;
            break;
        }
        if (mid * mid < n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    float frac = 0.1;
    for (int i = 0; i < 9; i++)
    {
        while (ans * ans <= n)
        {
            ans += frac;
        }
        ans = ans - frac;
        frac = frac / 10;
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