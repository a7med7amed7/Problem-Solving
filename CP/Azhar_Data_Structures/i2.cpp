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
    ll n, s;
    cin >> n >> s;
    if (n * (ll)1e9 < s)
    {
        cout << "NO";
        return;
    }
    cout << "YES\n";
    while (n--)
    {
        if (s >= 1e9)
        {
            cout << (ll)1e9 << " ";
            s -= 1e9;
        }
        else
        {
            cout <<(ll) s << " ";
            s = 0;
        }
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
}
