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
    ll arr[100005] = {0};
    ll n, m, x, y, z;
    cin >> n >> m;
    while (m--)
    {
        cin >> x >> y >> z;
        set<ll> s = {1, 2, 3};
        if (arr[x] != 0)
        {
            s.erase(arr[x]); // Calculated before
        }
        else if (arr[y] != 0)
        {
            s.erase(arr[y]); // Calculated before
        }
        else if (arr[z] != 0)
        {
            s.erase(arr[z]); // Calculated before
        }
        if (arr[x] == 0)
        {
            arr[x] = *s.begin();
            s.erase(s.begin());
        }
        if (arr[y] == 0)
        {
            arr[y] = *s.begin();
            s.erase(s.begin());
        }
        if (arr[z] == 0)
        {
            arr[z] = *s.begin();
            s.erase(s.begin());
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        if (arr[i])
            cout << arr[i] << " ";
        else
            cout << "1 ";
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