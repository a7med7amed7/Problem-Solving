#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

ll fastPower(ll b, ll p, ll mod)
{
    if (p == 0)
        return 1;
    ll temp = fastPower(b, p / 2, mod);
    if (p & 1)
        return (((temp * temp) % mod) * b) % mod;
    else
        return ((temp * temp) % mod);
}

ll nCr(ll n, ll r)
{

    ll mx = max(r, n - r);
    // ll mn = min(r, n - r);

    ll j = 1, ans = 1;
    for (int i = mx + 1; i <= n; i++)
    {
        ans *= i;
        ans /= j;
        j++;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    ll n, r;
    while (scanf("%ld %ld", &n, &r))
    {
        if (n == 0 && r == 0)
            break;
        printf("%ld things taken %ld at a time is %ld exactly.\n", n, r, nCr(n, r));
    }
}