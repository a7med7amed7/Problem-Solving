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
    string mn = "", mx = "";
    if (m == 0)
    {
        if (n == 1)
        {
            cout << "0 0";
        }
        else
        {
            cout << "-1 -1";
        }
        return;
    }
    // Fill max
    for (int i = 0; i < n; i++)
    {
        int temp = min(9, m);
        mx.push_back(temp + '0');
        m -= temp;
    }
    if (m > 0)
    {
        cout << "-1 -1";
        return;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        mn += mx[i];
    }
    int j = 0;
    while (mn[j] == '0')
        j++;
    mn[0]++;
    mn[j]--;
    cout << mn << " " << mx << "\n";
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