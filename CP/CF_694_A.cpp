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

    ll n, x, y;
    cin >> n >> x;
    ll sum = 0, mn = INT_MAX, mx = INT_MIN, c = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> y;
        if (y % x)
        {
            mn = min(mn, i);
            mx = max(mx, i);
        }
        else
        {
            c++;
        }
        sum += y;
    }
    if (c == n)
        cout << "-1";
    else if (sum % x)
        cout << n;
    else
    {
        cout << n - min(mn + 1, n - mx);
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
