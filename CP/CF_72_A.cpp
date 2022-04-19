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
    int n, m, k;
    cin >> n >> m >> k;

    int l = 0, r = k, mid;

    while (l <= r)
    {
        mid = (l + r) >> 1;
        if (mid + n > (k - mid) + m)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << k - r;

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