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
    string s, t;
    cin >> s >> t;
    int n = s.size(), c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
            c++;
    }
    if (c & 1)
    {
        cout << "impossible\n";
        return;
    }
    string ans = "";
    bool f = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            if (f)
                ans += s[i];
            else
                ans += t[i];
            f = !f;
            continue;
        }
        ans += s[i];
    }
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