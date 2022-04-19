#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

ll MOD = 1000000007;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

ll solve(ll i, vector<ll> arr, vector<ll> dp, ll n)
{
    if (i == n - 1)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    ll l = abs(arr[i] - arr[i + 1]) + solve(i + 1, arr, dp, n);
    ll r = INT_MAX;
    if (i + 2 < n)
    {
        r = abs(arr[i] - arr[i + 2]) + solve(i + 2, arr, dp, n);
    }
    return dp[i] = min(l, r);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    ll n;
    cin >> n;

    vector<ll> arr(n);
    vector<ll> dp(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // cout << solve(0, arr, dp, n);
    dp[1] = abs(arr[1] - arr[0]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = min(abs(arr[i] - arr[i - 1]) + dp[i - 1], abs(arr[i] - arr[i - 2]) + dp[i - 2]);
    }
    cout << dp.back() << "\n";
}