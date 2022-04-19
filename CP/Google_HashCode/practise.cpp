#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
int n = 4;
unordered_set<string> st;
void solve(int i, string t, string s = "")
{
    if (i == n)
    {
        st.insert(s);
        return;
    }
    if (t[i] != '?')
    {
        solve(i + 1, t, s + t[i]);
    }
    else
    {
        solve(i + 1, t, s + '1');
        solve(i + 1, t, s + '0');
    }
    
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
    solve(0, "?0?1");
    for (auto x : st)
    {
        cout << x << "\n";
    }
}
