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
    int n, x, mx = 1;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
        mx = max(mx, mp[x]);
    }

    int dif = n - mx; // Number of different element of max occurence
    int ans = 0;
    while (dif > 0)
    {
        ans++;               // Make a copy;
        ans += min(mx, dif); // Replace mx with any two element
        dif -= mx;
        mx *= 2;
    }
    cout << ans << "\n";
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