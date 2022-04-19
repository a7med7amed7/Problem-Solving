#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
string s;
multiset<string> st;
void solve(int i, string temp = "")
{
    if (i == s.size())
    {
        if (!temp.empty())
            st.insert(temp);
        return;
    }
    solve(i + 1, temp + s[i]);
    solve(i + 1, temp);
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
    cin >> s;
    solve(0);
    for (auto x : st)
    {

        cout << x << "\n";
    }
}
