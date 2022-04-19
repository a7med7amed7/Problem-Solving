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
    int n, m;
    cin >> n >> m;
    string s, t;
    vector<pair<string, string>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s >> t;
        v[i] = {t + ';', s};
        // cout << v[i].ff << " " << v[i].ss << "\n";
    }
    string x, y;
    while (m--)
    {
        cin >> x >> y;
        cout << x << " " << y << " #";
        for (int i = 0; i < n; i++)
        {
            if (v[i].ff == y)
            {
                cout << v[i].ss;
                break;
            }
        }
        cout << "\n";
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
