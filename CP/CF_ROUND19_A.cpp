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
    int n, mx = -1, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (mx > arr[i])
        {
            cout << "YES\n";
            return;
        }
        mx = max(mx, arr[i]);
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
