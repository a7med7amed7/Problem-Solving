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
    int n, a, b;
    cin >> n;
    stack<int> st;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> b;
            st.push(b);
        }
        else
        {
            if (st.empty())
            {
                cout << "kuchbhi?\n";
                continue;
            }
            cout << st.top() << "\n";
            st.pop();
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