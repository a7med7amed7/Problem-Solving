#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

bool check(char open, char close)
{
    if (open == '(' && close == ')')
        return 1;
    else if (open == '[' && close == ']')
        return 1;
    else if (open == '{' && close == '}')
        return 1;

    return 0;
}

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else
        {
            if (st.empty() || !check(st.top(), s[i]))
            {
                cout << "no";
                return;
            }
            else
                st.pop();
        }
    }
    if (st.empty())
        cout << "yes";
    else
        cout << "no";
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
