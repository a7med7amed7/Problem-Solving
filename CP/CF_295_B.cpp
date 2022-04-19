#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
int ans = INT_MAX;
void check(int n, int m, int c = 0)
{
    if (n < 0)
        return;
    if (n == m)
    {
        ans = min(ans, c);
        return;
    }
    cout << n << " " << m << "\n";
    if (n < m)
    {
        check(n * 2, m, c + 1);
    }
    check(n - 1, m, c + 1);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    int c = 0;
    while (m > n)
    {
        if (m % 2 == 0)
            m /= 2;
        else
            m++;
        c++;
    }
    cout << c + (abs(m - n));
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
    // {

    // }
    solve();
}