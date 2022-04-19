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

bool check(int mid, string s)
{
    map<char, bool> mp;
    int l = 0, r = 0;

    while (r < n)
    {
        if (mp[s[r]])
        {
            mp[s[l]] = 0;
            l++;
        }
        else
        {
            mp[s[r]] = 1;
            r++;
        }
        if (r - l == mid)
            return 1;
    }
    return 0;
}

void solve()
{
    cin >> n >> m;
    string s;
    cin >> s;
    s += s[n - 1];
    int l = 0, r = m, ans = 1, mid;
    while (l <= r)
    {
        mid = (l + r) >> 1;
        if (check(mid, s))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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