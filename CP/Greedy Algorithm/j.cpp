#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

ll n, k;
bool f = 0;

void commit(int k, vector<int> &v, int n1)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1] && v[i] == n1)
        {
            v.erase(v.begin() + i);
            v.erase(v.begin() + i + 1);
            v.push_back(v[i] * 2);
        }
    }
}
void func(int i, vector<ll> v, ll sum = 0, int c = 0)
{
    if (c > n)
        return;
    if (f)
    {
        return;
    }
    if (i == v.size())
    {
        if (sum == n && c == k)
        {
            f = 1;
        }
        return;
    }
    func(i, v, sum + v[i], c + 1);

    func(i + 1, v, sum + v[i], c + 1);
    func(i + 1, v, sum, c);
}

void solve()
{
    cin >> n >> k;
    vector<ll> v;
    if (n & 1)
    {
        v.push_back(1);
        k--;
    }
    while (v.back() * 2 < n)
    {
        v.push_back(v.back() * 2);
    }
    func(0, v);
    cout << f;
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