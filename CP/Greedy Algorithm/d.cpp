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
    int n, x;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    int ans = 0;
    int one = mp[1], two = mp[2], three = mp[3], four = mp[4];
    ans += four;
    if (one <= three)
    {
        ans += three;
        one = 0;
    }
    else if (three < one)
    {
        ans += three;
        one -= three;
    }
    if (one % 2 == 0)
    {
        two += (one / 2);
        one = 0;
    }
    else if (one > 1)
    {
        two += (one / 2);
        one = 1;
    }
    if (two % 2 == 0)
    {
        ans += (two / 2);
    }
    else if (two > 0)
    {
        ans += (two / 2);
        two = 1;
    }
    if (two == 1 || one == 1)
        ans++;
    cout << ans << "\n";
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