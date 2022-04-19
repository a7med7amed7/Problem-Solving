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
    int n, k, x;
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }
    if (s.size() > k)
    {
        cout << "-1\n";
        return;
    }
    cout << n * k << "\n";
    for (int i = 0; i < n; i++)
    {
        for (auto y : s)
        {
            cout << y << " ";
        }
        for (int j = 0; j < k - s.size(); j++)
        {
            cout << 1 << " ";
        }
    }
    cout << "\n";
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
        solve();
}