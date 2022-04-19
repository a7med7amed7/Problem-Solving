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
    cin >> n;
    int arr[n], a[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    a[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        a[i] = max(arr[i], a[i + 1]);
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[0])
            continue;
        else
        {

            if (arr[i] < a[i])
                continue;
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}