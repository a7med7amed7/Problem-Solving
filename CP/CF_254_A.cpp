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
    int n, m;
    cin >> n >> m;
    char arr[n][m], temp[n][m];
    bool f = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (f)
                temp[i][j] = 'B';
            else
                temp[i][j] = 'W';
            if (f)
                f = 0;
            else
                f = 1;
        }
        if (m % 2 == 0)
        {
            if (f)
                f = 0;
            else
                f = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '-')
                cout << '-';
            else
                cout << temp[i][j];
        }
        cout << "\n";
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
    // {

    // }
    solve();
}