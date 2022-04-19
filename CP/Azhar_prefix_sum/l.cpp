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
    priority_queue<int> mx;
    priority_queue<int, vector<int>, greater<int>> mn;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        mx.push(x);
        mn.push(x);
    }
    ll ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        int mnElement = mn.top(), mxElement = mx.top();
        mn.pop(), mx.pop();
        ans1 += mxElement, ans2 += mnElement;
        mxElement--, mnElement--;
        if (mxElement > 0)
            mx.push(mxElement);
        if (mnElement > 0)
            mn.push(mnElement);
    }
    cout << ans1 << " " << ans2 << "\n";
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
