#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

int n, m;
bool check(int mid, int arr[])
{
    ll sum = 0;
    for (int i = 0; i < mid; i++)
    {
        sum += arr[i];
    }
    if (sum >= m)
        return 1;
    int l = 0, r = mid;
    while (l <= r && r < n)
    {
        sum += arr[r];
        sum -= arr[l];
        l++, r++;
        if (sum >= m)
            return 1;
    }
    return 0;
}

void solve()
{
    cin >> n >> m;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = n, ans = -1, mid;
    while (l <= r)
    {
        mid = (l + r) >> 1;
        if (check(mid, arr))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

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