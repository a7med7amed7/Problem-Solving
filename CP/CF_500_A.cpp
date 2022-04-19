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
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 1;
    for (i; i < n;)
    {
        if (i == t)
        {
            cout << "YES";
            return;
        }
        if (i + arr[i] > n)
            break;
        i += arr[i];
    }
    if (i == t)
    {
        cout << "YES";
        return;
    }
    cout << "NO";
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