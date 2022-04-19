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
    vector<int> v(n);
    vector<bool> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool f = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> f;
        t[i] = f;
        if (f)
            ans += v[i];
    }
    int l = 0, r = 0;
    ll sum = 0, mx = 0;
    while (r < n)
    {
        if (r - l == k)
        {
            if (t[l] == 0)
                sum -= v[l];
            l++;
            continue;
        }
        if (t[r] == 0)
        {
            sum += v[r];
        }
        // cout << l << " " << r << " " << sum << " " << mx << "\n";
        mx = max(mx, sum);
        r++;
    }
    cout << ans + mx;
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
