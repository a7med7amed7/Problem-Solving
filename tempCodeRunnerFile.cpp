#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

bool comp(pair<int, int> &a, pair<int, int> &b)
{
    if (abs(a.first - a.second) == abs(b.first - b.second))
    {
        return a.first < b.first;
    }

    return abs(a.first - a.second) < abs(b.first - b.second);
}

bool check(ll n)
{
    ll sq = sqrt(n);
    return n == sq * sq;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].ff;
    for (int i = 0; i < n; i++)
        cin >> v[i].ss;
    sort(all(v), comp);
    ll ans = 0;
    for (int i = 0; i < k; i++)
        ans += v[i].ff;

    for (int i = k; i < n; i++)
        ans += min(v[i].ff, v[i].ss);

    cout << ans;
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