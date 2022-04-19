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
    int n, sum = 0, x;
    cin >> n;
    map<int, int> mp;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    for (auto e : mp)
    {
        v.push_back(e.second);
    }
    sort(all(v));
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum >= (v.size() - i))
        {
            cout << sum - (v.size() - i) << "\n";
            break;
        }
    }
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