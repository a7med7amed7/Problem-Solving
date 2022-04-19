#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
int mx = 0;
void check(int i, int sum, int n, vector<pair<int, int>> arr, int k)
{
    if (i == n)
    {
        mx = max(mx, sum);
        return;
    }
    if (k - arr[i].ff >= 0)
    {
        check(i + 1, sum + arr[i].ss, n, arr, k - arr[i].ff);
    }
    check(i + 1, sum, n, arr, k);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].ff >> arr[i].ss;
    }

    check(0, 0, n, arr, k);
    cout << mx;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);

    solve();
}
