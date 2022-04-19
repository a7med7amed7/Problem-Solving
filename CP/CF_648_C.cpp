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
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    int freq[n + 1];
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        freq[a[i]] = i;
    }
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];

        if (freq[b[i]] >= i)
        {
            ans[freq[b[i]] - i]++;
            mx = max(mx, ans[freq[b[i]] - i]);
        }
        else
        {
            ans[n - i + freq[b[i]]]++;
            mx = max(mx, ans[n - i + freq[b[i]]]);
        }
    }
    cout << mx;
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