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
    int n, k;
    cin >> n >> k;
    vector<pair<char, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].ss;
    }
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        v[i].ff = s[i];
    }
    ll ans = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        int c = 0;
        priority_queue<int> pq;
        for (int j = 0; j < n; j++)
        {
            if (v[j].ff != i)
            {
                c = k;
                while (!pq.empty() && c > 0)
                {
                    ans += pq.top();
                    pq.pop();
                    c--;
                }
                pq = {};
                c = 0;
                continue;
            }
            else
            {

                c++;
                pq.push(v[j].ss);
            }
        }
        c = k;
        while (!pq.empty() && c > 0)
        {
            ans += pq.top();
            pq.pop();
            c--;
        }
    }
    cout << ans << "\n";
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