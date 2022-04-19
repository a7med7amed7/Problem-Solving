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
    int n, k;
    cin >> n >> k;
    int x;
    bool f = 0;
    map<int, bool> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (mp[x - k] || mp[x + k])
        {
            f = 1;
        }
        mp[x] = 1;
    }
    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";
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