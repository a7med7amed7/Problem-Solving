#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

void solve()
{
    string s;
    ll nb, ns, nc, pb, ps, pc, r;
    cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    ll ans = 0, n = s.size();
    ll cb = 0, cs = 0, cc = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'B')
            cb++;
        else if (s[i] == 'S')
            cs++;
        else
            cc++;
    }
    ll p = pb * cb + ps * cs + pc * cc;
    // while (nb >= cb && ns >= cs >> nc >= cc)
    // {
    //     ans++;
    //     nb -= cb, ns -= cs, nc -= cc;
    // }
    r += cb ? (nb * pb) : 0;
    r += cs ? (ns * ps) : 0;
    r += cc ? (nc * pc) : 0;

    ans += (r / p);
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