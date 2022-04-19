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
    int n, m, x;
    cin >> n >> m;
    priority_queue<int> pq;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back({x, i});
        pq.push(x);
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].ff == pq.top())
        {
            if (v[i].ss == m)
            {
                cout << c + 1 << "\n";
                return;
            }
            pq.pop();
            c++;
        }
        else
        {
            v.push_back(v[i]);
            n++;
        }
    }
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
