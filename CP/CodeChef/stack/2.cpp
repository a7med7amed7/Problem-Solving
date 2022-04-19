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
    vector<ll> arr(n);
    ll ans = 1, mod = 1000000007;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<pair<ll, ll>> st;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (!st.empty())
        {
            if (arr[i] <= st.top().ff)
            {
                while (!st.empty() && arr[i] <= st.top().ff)
                    st.pop();
                if (!st.empty())
                    ans = ((ans % mod) * (st.top().ss - i + 1) % mod) % mod;
            }
            else
            {
                if (!st.empty())
                    ans = ((ans % mod) * (st.top().ss - i + 1) % mod) % mod;
            }
        }
        st.push({arr[i], i});
    }
    cout << ans << "\n";
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
