#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

int solve(int i, int sum, int arr[], int n, int k)
{
    if (i == n)
    {
        if (sum == k)
            return 1;
        return 0;
    }
    // cout << i << " " << sum << "\n";
    int l = solve(i + 1, sum + arr[i], arr, n, k);

    int r = solve(i + 1, sum - arr[i], arr, n, k);

    return l + r;
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
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << solve(1, arr[0], arr, n, k);
}