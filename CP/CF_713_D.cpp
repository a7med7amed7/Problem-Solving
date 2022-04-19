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
    ll n, sum = 0;
    cin >> n;
    n += 2;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    sort(all(arr));
    ll x = arr[n - 1], y = arr[n - 2];
    sum -= x;

    for (ll i = 0; i < n - 1; i++)
    {
        if (sum - arr[i] == x)
        {
            for (ll j = 0; j < n - 1; j++)
            {
                if (i == j)
                    continue;
                cout << arr[j] << " ";
            }
            cout << "\n";
            return;
        }
    }
    if (sum - y == y)
    {
        for (ll j = 0; j < n - 2; j++)
        {
            cout << arr[j] << " ";
        }
        cout << "\n";
        return;
    }
    cout << "-1\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}