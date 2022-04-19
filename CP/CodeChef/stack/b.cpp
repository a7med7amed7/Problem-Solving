#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

void print(stack<string> &st)
{
    while (!st.empty())
    {
        string x = st.top();
        st.pop();
        print(st);
        cout << x << "/";
    }
}

void solve()
{
    int n;
    cin >> n;
    string a, b;
    stack<string> s;
    while (n--)
    {
        cin >> a;
        if (a == "pwd")
        {
            // Print
            cout << "/";
            stack<string> s2 = s;
            print(s2);
            cout << "\n";
        }
        else
        {
            cin >> b;
            string t = "";
            if (b[0] == '/')
            {
                s = {};
                b = b.substr(1, b.size() - 1);
            }
            for (auto c : b)
            {
                if (c != '/')
                {
                    t += c;
                }
                else
                {
                    if (t == "..")
                    {
                        if (!s.empty())
                            s.pop();
                    }
                    else
                    {
                        s.push(t);
                    }
                    t = "";
                }
            }
            if (t == "..")
            {
                if (!s.empty())
                    s.pop();
            }
            else
            {
                s.push(t);
            }
        }
    }
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