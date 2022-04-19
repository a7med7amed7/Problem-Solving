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
    int n;
    string s, x;
    cin >> s >> n;
    map<string, int> mp;
    vector<string> v;

    while (cin >> x)
    {
        v.push_back(x);
    }
    stack<string> st;
    for (int i = 0; i < v.size(); i++)
    {
        if (st.empty())
            st.push(v[i]);
        else
        {
        }
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
