#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

bool check(char op, char top)
{
    if (op == '^' || op == '(')
        return 1;
    if ((op == '*' || op == '/') && (top == '+' || top == '-' || top == '('))
        return 1;
    if ((op == '+' || op == '-') && top == '(')
        return 1;
    return 0;
}

void solve()
{
    string s, ans = "";
    cin >> s;
    string op = "-+*/^(";
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            while (!st.empty())
            {
                if (st.top() == '(')
                {

                    st.pop();
                    break;
                }
                ans += st.top();
                st.pop();
            }
            continue;
        }
        int x = op.find(s[i]);
        if (x != string::npos)
        {
            // Operator found.
            if (st.empty())
            {
                st.push(s[i]);
            }
            else if (check(s[i], st.top()))
            {
                st.push(s[i]);
            }
            else
            {

                ans += st.top();
                st.pop();
                st.push(s[i]);
            }
        }
        else
        {
            ans += s[i];
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans;
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