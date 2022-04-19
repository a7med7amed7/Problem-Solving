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
    bool f = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty() || s[i] != st.top())
        {
            st.push(s[i]);
        }
        else
        {
            st.pop();
            if (f)
                f = 0;
            else
                f = 1;
        }
    }
    if (f)
        cout << "NO";
    else
        cout << "YES";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    solve();
}
