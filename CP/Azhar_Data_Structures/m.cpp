#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

bool comp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.ff == b.ff)
    {
        return a.ss > b.ss;
    }
    return a.ff < b.ss;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    bool t;
    int h, m;
    vector<pair<int, int>> one, zero;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> h >> m;
        if (t)
            one.push_back({h, m});
        else
            zero.push_back({h, m});
    }
    sort(all(one));
    sort(all(zero));
    int i = 0, j = 0, ans = 0, res = 0, x2 = x;
    bool f = 1, lts = 0;
    while (i < n && j < n)
    {
        if (f)
        {
            if (lts)
                break;
            if (one[i].ff <= x)
            {
                x += one[i].ss;
                ans++;
            }
            else
                break;
            f = 0;
            lts = 1;
            i++;
        }
        else
        {
            if (!lts)
                break;

            if (zero[j].ff <= x)
            {
                x += zero[j].ss;
                ans++;
            }
            else
                break;
            f = 1;
            lts = 0;
            j++;
        }
    }
    f = 0, lts = 1, i = 0, j = 0;
    while (i < n && j < n)
    {
        if (f)
        {
            if (lts)
                break;
            if (one[i].ff <= x2)
            {
                x2 += one[i].ss;
                res++;
            }
            else
                break;
            f = 0;
            lts = 1;
            i++;
        }
        else
        {
            if (!lts)
                break;

            if (zero[j].ff <= x2)
            {
                x2 += zero[j].ss;
                res++;
            }
            else
                break;
            f = 1;
            lts = 0;
            j++;
        }
    }
    cout << max(ans, res);
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
