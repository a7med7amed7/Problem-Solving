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
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<pair<int, pair<int, int>>> sum;
    int temp = 0;
    for (int i = 0; i < m; i++)
    {
        temp += arr[i];
    }
    sum.push_back({temp, {0, m - 1}}); // inclusive
    for (int i = m; i < n; i++)
    {
        temp -= arr[i - m - 1];
        temp += arr[i];
        sum.push_back({temp, {i - m, i}});
    }
    sort(rall(sum));
    for (int i = 0; i < n; i++)
    {
        cout << sum[i].ff << " " << sum[i].ss.ff << " " << sum[i].ss.ss << "\n";
    }
    int ans = 0;
    pair<int, int> x = {0, 0};
    for (int i = 0; i < k; i++)
    {
        if ((sum[i].ss.ff > x.ff && sum[i].ss.ff < x.ss) || (sum[i].ss.ss > x.ff && sum[i].ss.ss < x.ss))
        {
        }
        else
        {
            ans += sum[i].ff;
            x = sum[i].ss;
        }
    }
    cout << ans;
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