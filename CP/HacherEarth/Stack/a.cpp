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
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    vector<int> sum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        int c = 0;
        int x = v[i];
        while (x > 0)
        {
            c += (x % 10);
            x /= 10;
        }
        sum[i] = c;
    }
    while (q--)
    {
        int x;
        cin >> x;
        int j = -1;
        for (int i = x + 1; i <= n; i++)
        {
            if (v[x] < v[i] && sum[x] > sum[i])
            {
                j = i;
                break;
            }
        }
        cout << j << "\n";
    }
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