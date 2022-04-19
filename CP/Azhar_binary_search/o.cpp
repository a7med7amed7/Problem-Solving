#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

bool comp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return a.ff + a.ss < b.ff + b.ss;
}
// 2 {2,0}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n], temp[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll l = 0, r = n, ans1, ans2;
    while (l <= r)
    {
        ll mid = (l + r) >> 1, sum = 0;
        for (int i = 0; i < n; i++)
        {
            temp[i] = arr[i] + mid * (i + 1);
        }
        sort(temp, temp + n);
        for (int i = 0; i < mid; i++)
        {
            sum += temp[i];
        }
        if (sum <= k)
        {
            l = mid + 1;
            ans1 = mid, ans2 = sum;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans1 << " " << ans2 << "\n";
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