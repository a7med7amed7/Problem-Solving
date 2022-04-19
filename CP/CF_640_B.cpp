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
    int n, k;
    cin >> n >> k;
    if (n < k)
        cout << "NO";
    else if ((n & 1) == (k & 1))
    {
        cout << "YES\n";
        for (int i = 0; i < k - 1; i++)
        {
            cout << "1 ";
        }
        cout << n - k + 1;
    }
    else if (!(n & 1) && (k & 1))
    {
        if (n - 2 * (k - 1) <= 0)
            cout << "NO";
        else
        {
            cout << "YES\n";

            for (int i = 0; i < k - 1; i++)
            {
                cout << "2 ";
            }
            cout << n - (k - 1) * 2;
        }
    }
    else
    {
        cout << "NO";
    }

    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    int t;
    cin >> t;
    while (t--)
        solve();
}