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
    int n, v;
    cin >> n >> v;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].ff >> arr[i].ss;
    }
    sort(all(arr));
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            int x = min(v, arr[i].ss);
            ans += x;
            arr[i].ss -= x;
        }
        else
        {
            int x = 0;
            if (arr[i].ff - arr[i - 1].ff == 1)
                x = arr[i - 1].ss;
            if (x >= v)
            {
                ans += v;
                // arr[i].ss -= v;
            }
            else
            {
                int dif = v - x;
                // x += min(dif, arr[i].ss);
                if (dif <= arr[i].ss)
                {
                    x += dif;
                    arr[i].ss -= dif;
                }
                else
                {
                    x += arr[i].ss;
                    arr[i].ss = 0;
                }
                ans += x;
            }
        }
    }
    ans += min(v, arr[n - 1].ss);
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