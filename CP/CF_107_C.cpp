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
    int n, q, x, c = 0;
    cin >> n >> q;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (!mp[x])
            mp[x] = i + 1;
    }
    while (q--)
    {
        cin >> x;
        int res = mp[x];
        cout << res << " ";

        for (auto e : mp)
        {
            if (e.second < res)
            {
                mp[e.first]++;
            }
        }
        mp[x] = 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}