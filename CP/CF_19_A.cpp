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
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            v.push_back(i);
        }
    }
    if (n != 1)
    {
        v.push_back(n);
    }
    if (v.size() < k)
    {
        cout << -1;
    }
    else
    {
        for (ll i = v.size() - 2; i >= 0 && v.size() > k; i--)
        {
            v[i] *= v[i + 1];
            v.pop_back();
        }
        for (ll i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
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