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
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty() || s[i] != st.top())
        {
            st.push(s[i]);
        }
        else
        {
            st.pop();
        }
    }
    vector<char> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    solve();
}
