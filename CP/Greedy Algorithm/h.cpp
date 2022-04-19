#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
char temp(char c)
{
    string x = "RBG";
    for (auto y : x)
    {
        if (y != c)
            return y;
    }
    return c;
}
char temp2(char c1, char c2)
{
    string x = "RBG";
    for (auto y : x)
    {
        if (y != c1 && y != c2)
            return y;
    }
    return c1;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            c++;
            if (i < n - 1)
                if (s[i] == s[i + 1])
                {
                    s[i] = temp(s[i]);
                }
                else
                    s[i] = temp2(s[i], s[i + 1]);
            else
                s[i] = temp(s[i]);
        }
    }
    cout << c << "\n"
         << s << "\n";
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