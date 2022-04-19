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
    bool f1 = 0, f2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (!f1 && s[i] == 'A' && s[i + 1] == 'B')
        {
            f1 = 1;
            i++;
        }
        else if (!f2 && s[i] == 'B' && s[i + 1] == 'A')
        {
            f2 = 1;
            i++;
        }
    }
    if (f1 && f2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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