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
    int n, x, a;
    cin >> n >> x;
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a & 1)
            odd++;
        else
            even++;
    }
    if (x & 1)
    {
        if (odd >= x || odd + (even / 2) >= x)
        {
            cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        if (even > 0 && (odd >= x - 1 || odd + ((even - 1) / 2) >= x - 1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
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