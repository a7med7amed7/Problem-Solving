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
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr[n] = 0;
    int l = 0, r = 0, ans = INT_MAX;
    ll sum = 0;
    while (r <= n)
    {
        if (sum < m)
        {
            sum += arr[r];
            r++;
        }
        else
        {
            ans = min(ans, r - l);
            sum -= arr[l];
            l++;
        }
        // cout << l << " " << r << " " << sum << "\n";
    }
    if (ans == INT_MAX)
        cout << -1;
    else
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