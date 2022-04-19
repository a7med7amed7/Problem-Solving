#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
int z = 0;
void check(int c, int sum, int i, int x)
{
    if (i > c)
        return;
    if (i == x && sum == c)
    {
        z++;
        return;
    }
    check(c, sum + 1, i + 1, x);
    check(c, sum - 1, i + 1, x);
}

void solve()
{
    string s, t;
    cin >> s >> t;
    int n = s.size(), c = 0, c2 = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+')
            c++;
        else
            c--;
        if (t[i] == '+')
        {
            c2++;
            x++;
        }
        else if (t[i] == '-')
        {
            c2--;
            x++;
        }
    }

    cout << float(n - x + c) / (pow(2, n - x)) << "\n";
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