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
    int n;
    cin >> n;
    int l = 0, r = 0, ans = 0;
    ll sum = 0;
    int mx = 1, mn = 1;
    while (l <= r && mx <= n)
    {
        // cout << odd[l] << " " << odd[r] << " ";
        if (sum < n)
        {
            sum += mx;
            mx += 2;
        }
        else if (sum > n)
        {
            sum -= mn;
            mn += 2;
        }
        else
        {
            ans++;
            if (mx < n)
                sum += mx, mx += 2;
            else
                break;
        }
        // cout << sum << "\n";
    }
    cout << ans + (n & 1);
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