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
    int n, odd = 0, even = 0, x;
    cin >> n;
    bool f = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (!f)
            continue;
        if (x & 1)
        {
            if (x >= odd)
            {
                odd = x;
            }
            else
                f = 0;
        }
        else
        {
            if (x >= even)
            {
                even = x;
            }
            else
                f = 0;
        }
    }

    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";
    return;
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