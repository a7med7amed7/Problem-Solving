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
    string s;
    cin >> s;
    int n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
            continue;
        }
        if (s[i] == 'B')
            st.pop();
        else
            st.push(s[i]);
    }
    cout << st.size() << "\n";
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